CXX=g++
CFLAGS=-O3 -Wall -Werror --std=c++17

compile:
	$(CXX) -o Q1.elf Q1.cpp $(CFLAGS)
	$(CXX) -o Q2.elf Q2.cpp $(CFLAGS)

	$(CXX) -c -o strlib.o strlib.cpp $(CFLAGS)
	$(CXX) -c -o Q3.o Q3.cpp $(CFLAGS)
	$(CXX) -o Q3.elf Q3.o strlib.o

	$(CXX) -o Q4.elf Q4.cpp $(CFLAGS)

run:
	-[ -f Q1.elf ] && ./Q1.elf
	-[ -f Q2.elf ] && ./Q2.elf
	-[ -f Q3.elf ] && ./Q3.elf

clean:
	-rm *.elf *.o 2> /dev/null

do-all:

	make compile && make run