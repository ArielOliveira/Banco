banco = ./bin/banco

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

OBJS = ./build/main.o ./build/conta.o ./build/movimentacao.o

banco: $(banco)

$(banco): CPPFLAGS += -I. -I./include/
$(banco): $(OBJS)
	$(CC) $^ $(CPPFLAGS) -o $@

./build/main.o: ./src/main.cpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/conta.o: ./src/conta.cpp ./include/conta.h
	$(CC) -c $(CPPFLAGS) $<	-o $@	

./build/movimentacao.o: ./src/movimentacao.cpp ./include/movimentacao.h
	$(CC) -c $(CPPFLAGS) $<	-o $@	

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test
	
	
