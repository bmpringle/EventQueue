AAtest:
	g++ -std=c++2a test.cpp lib/eventLib.a -o test
library:
ifeq ($(OS),Windows_NT) 
	#todo: add support for garbage-tm os
endif
ifneq ($(OS),Windows_NT) 
	mkdir -p obj
	mkdir -p lib
	g++ -std=c++2a -c EventQueue.cpp -o  ./obj/EventQueue.o
	ar rvs ./lib/eventLib.a ./obj/EventQueue.o
endif
clean: 
	rm -rf obj
	rm -rf lib
	rm test
library-cross:
	mkdir -p obj
	mkdir -p lib
	/usr/local/bin/x86_64-w64-mingw32-g++ -std=c++2a -c EventQueue.cpp -o  ./obj/EventQueue.o
	/usr/local/bin/x86_64-w64-mingw32-ar rvs ./lib/eventLib.lib ./obj/EventQueue.o
