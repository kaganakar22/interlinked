CC = clang
CFLAGS = -Wall -Wextra 
WXFLAGS = $(shell wx-config --cxxflags)
WXLINK = $(shell wx-config --libs)


all: my_program

my_program: main.o test.o
	$(CC) $(CFLAGS) main.o test.o -o my_program

run: my_program
	./my_program

main.o: main.cpp test.h
	$(CC) $(CFLAGS) -c main.cpp -o main.o

test.o: test.cpp test.h
	$(CC) $(CFLAGS) -c test.cpp -o test.o

clean:
	rm -f *.o my_program
