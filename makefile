CC = g++
CFLAGS = -Wall -g

TARGET = main.out
SRCS_CPP = makeFileExample_Main.cpp makeFileExample_Aux.cpp
SRCS_H = makeFileExample_Helper.h

OBJS = $(SRCS_CPP:.cpp=.o)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(OBJS) : $(SRCS_CPP) $(SRCS_H)
	$(CC) $(CFLAGS) -c $(SRCS_CPP)


clean:
	rm -f $(TARGET) $(OBJS)