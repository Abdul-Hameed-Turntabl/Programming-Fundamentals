CXX=g++
CFLAGS=-Wall -Werror -O3 --std=c++17

compile:
	$(CXX) -c -o output.o output.cpp $(CFLAGS)
	$(CXX) -c -o Q2.o     Q2.cpp     $(CFLAGS)
	$(CXX) -o main.elf Q2.o output.o
	$(CXX) -o Q6.elf Q6.cpp $(CFLAGS) 

run:
	-[ -f main.elf ] && ./main.elf
	-[ -f Q6.elf   ] && ./Q6.elf

clean:
	rm *.o *.elf
