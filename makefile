test:
	g++ -std=c++2a EventQueue.cpp test.cpp -o test
library:
	g++ -std=c++2a -c EventQueue.cpp -o  ./obj/EventQueue.o
	ar rvs ./lib/eventLib.a ./obj/EventQueue.o
	rm ./obj/*.o
