CXX = g++
CXXFLAGS = -Wall -g
OBJ = disk.o main.o \
	stats.o tracereader.o policy.o
PROG = sim

$(PROG): $(OBJ)
	g++ -o $(PROG) $(OBJ)

$(OBJ): global.hpp policy.hpp

tracereader.o: disk.hpp


.PHONY: clean
clean:
	-rm $(PROG) $(OBJ)
