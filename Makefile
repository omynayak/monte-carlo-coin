CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -std=c++17

main: main.cpp montecarlo.cpp montecarlo.h
	$(CXX) $(CXXFLAGS) main.cpp montecarlo.cpp -o main
