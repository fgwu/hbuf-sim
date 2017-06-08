all: disk.o sim.o
	g++ -o sim disk.o sim.o

disk.o: disk.cpp disk.hpp
	g++ -c disk.cpp
sim.o: sim.cpp
	g++ -c sim.cpp

clean:
	-rm sim *.o
