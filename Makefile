CC=g++
DIR=square-root/
CCFLAGS=-Wall -Wpedantic -O3 -Wextra 

release:
	$(CC) $(CCFLAGS) $(DIR)functions.cpp $(DIR)functions.hpp $(DIR)main.cpp
	mv a.out square-root.uexe
	
debug:
	$(CC) $(CCFLAGS) -DDEBUG $(DIR)functions.cpp $(DIR)functions.hpp $(DIR)main.cpp
	mv a.out square-root.uexe
	
clean:
	rm -f $(DIR)*.o $(DIR)*.gch $(DIR)*.ec $(DIR)*.out *.uexe
