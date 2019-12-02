#Makefile

linkedListTests: linkedListTests.o recLinkedListFuncs.o strFuncs.o linkedListFuncs.o tddFuncs.o	#making tests
	g++ linkedListTests.o recLinkedListFuncs.o strFuncs.o linkedListFuncs.o tddFuncs.o -o linkedListTests

strFuncs.o: strFuncs.cpp
	g++ -c strFuncs.cpp #compiling strFuncs


recLinkedListFuncs.o: recLinkedListFuncs.cpp
	g++ -c recLinkedListFuncs.cpp #compiling recLinkedListFuncs

linkedListFuncs.o: linkedListFuncs.cpp
	g++ -c linkedListFuncs.cpp #compiling linkedListFuncs

tddFuncs.o: tddFuncs.cpp
	g++ -c tddFuncs.cpp #compiling tddFuncs

linkedListTests.o: linkedListTests.cpp
	g++ -c linkedListTests.cpp #compiling linkedListTests


tests: linkedListTests
	./linkedListTests 1
	./linkedListTests 2
	./linkedListTests 3
	./linkedListTests 4

clean:
	#removing compiled code
	rm *.o
