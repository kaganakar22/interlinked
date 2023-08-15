CC = clang
CFLAGS = -Wall -Wextra 
WXFLAGS = $(shell wx-config --cxxflags)
WXLINK = $(shell wx-config --libs)


all: interlinked

interlinked: main.o Application.o 
	$(CC) $(CFLAGS) main.o Application.o -o interlinked

run: interlinked
	./interlinked

main.o: main.cpp Application.h
	$(CC) $(CFLAGS) -c main.cpp -o main.o

test.o: Application.cpp Application.h
	$(CC) $(CFLAGS) -c Application.cpp -o Application.o

clean:
	rm -f *.o interlinked
