CXX=g++
CFLAGS=-O3 -Wall -Werror --std=c++17

compile:
	$(CXX) -o Q1.elf Q1.cpp $(CFLAGS)
	$(CXX) -o Q2.elf Q2.cpp $(CFLAGS)
	$(CXX) -o Q3.elf Q3.cpp $(CFLAGS)

run:
	-[ -f Q1.elf ] && ./Q1.elf
	-[ -f Q2.elf ] && ./Q2.elf
	-[ -f Q3.elf ] && ./Q3.elf

clean:
	-rm *.elf *.o 2> /dev/null