# Makefile for Elevators
CXXFLAGS =

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: store.o RobotPart.o
	$(CXX) $(CXXFLAGS) store.o
store.o: store.cpp store.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c store.cpp
RobotPart.o: robot_part.cpp robot_part.h std_lib_facilities.h
		$(CXX) $(CXXFLAGS) -w -c robot_part.cpp

clean:
	rm -f *.o a.out
