
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

longest-consecutive-sequence: longest-consecutive-sequence.o
	$(CC) $(CFLAGS) -o longest-consecutive-sequence longest-consecutive-sequence.o

longest-consecutive-sequence.o: longest-consecutive-sequence.cpp
	$(CC) $(CFLAGS) -c longest-consecutive-sequence.cpp

clean:
	rm -rf longest-consecutive-sequence longest-consecutive-sequence.o
