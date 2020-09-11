CC=g++

release:
	$(CC) functions.cpp functions.hpp main.cpp
	mv a.out square-root.ec
	
debug:
	$(CC) -DDEBUG functions.cpp functions.hpp main.cpp
	mv a.out square-root.ec
	
clean:
	rm -f *.o *.gch *.ec *.out
