CXX=g++
CFLAGS= -O3 -g -Wall -Werror --std=c++17
GDB=gdb

compile:
	$(CXX) -o Q1.o Q1.cpp $(CFLAGS)
	$(CXX) -o Q2.o Q2.cpp $(CFLAGS)
	$(CXX) -o Q3.o Q3.cpp $(CFLAGS)
	$(CXX) -o Q4.o Q4.cpp $(CFLAGS)

run:
	-[ -f Q1.o ] && ./Q1.o
	-[ -f Q2.o ] && ./Q2.o
	-[ -f Q3.o ] && ./Q3.o
	-[ -f Q4.o ] && ./Q4.o

clean:
	-rm *.o

debug:
	$(GDB)