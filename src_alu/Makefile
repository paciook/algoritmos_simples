.PHONY: all clean

BIN = main

CPP = taller.cpp test.cpp
OBJ = $(CPP:.cpp=.o)
SRC = $(CPP)

all: main

clean:
	rm -f $(BIN) $(OBJ)

main: test.o taller.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c -o $@ $<
