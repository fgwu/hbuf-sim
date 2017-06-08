CXX = g++
CXXFLAGS = -Wall -g
OBJ = disk.o main.o \
	stats.o
PROG = sim

$(PROG): $(OBJ)
	g++ -o $(PROG) $(OBJ)

$(OBJ): global.hpp

.PHONY: clean
clean:
	-rm $(PROG) $(OBJ)
