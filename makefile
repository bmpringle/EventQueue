test:
	g++ -std=c++2a EventQueue.cpp test.cpp -o test
library:
	mkdir -p obj
	mkdir -p lib
	g++ -std=c++2a -c EventQueue.cpp -o  ./obj/EventQueue.o
	ar rvs ./lib/eventLib.a ./obj/EventQueue.o
clean: 
	rm -rf obj
	rm -rf lib
	rm test