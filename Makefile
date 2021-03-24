#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

OBJECTS=snowman.o
SOURCES=snowman.cpp

run: test
	./$^

test: TestRunner.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

main: Main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o main

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

tidy:
	clang-tidy $(SOURCES) -checks=bugprone-*,clang-analyzer-*,cppcoreguidelines-*,performance-*,portability-*,readability-* --warnings-as-errors=* --

clean:
	rm -f *.o test
	rm -f StudentTest*.cpp
