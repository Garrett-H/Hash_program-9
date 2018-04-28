CC=g++

DEBUG=-g

TARGET=heap

CFLAGS= -c -Wall $(DEBUG)


all: $(TARGET)

$(TARGET): main.o heap.o
	   $(CC) main.o heap.o -o $(TARGET)

main.o: main.cpp heap.h
	$(CC) $(CFLAGS) main.cpp

heap.o: heap.h
	

clean:
	rm *.o $(TARGET)
