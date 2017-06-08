all: disk.o hello.o
	g++ -o sim disk.o hello.o

disk.o: disk.cpp disk.hpp
	g++ -c disk.cpp

clean:
	-rm hello
