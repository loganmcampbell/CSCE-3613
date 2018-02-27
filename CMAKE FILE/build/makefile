CXX = g++
CXXFLAGS = -Wall -g
CFLAGS=-std=c99

main: main.o factorial.o gcd.o gn3.o prime.o
	$(CXX) $(CXXFLAGS) -o main main.o factorial.o gcd.o gn3.o prime.o

main.o: main.c gcd.c gn3.c prime.c factorial.c
		$(CXX) $(CXXFLAGS) -c main.c

factorial.o : factorial.h
