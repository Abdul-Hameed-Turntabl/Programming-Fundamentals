CXX=g++
CFLAGS=-O3 -Wall --std=c++17 #-ansi #-pedantic #-Werror
NM=nm 
NMFLAGS= -C

compile:
	$(CXX) -o Q1.elf Q1.cpp $(CFLAGS)
	$(CXX) -o Q2.elf Q2.cpp $(CFLAGS)
	$(CXX) -o Q3.elf Q3.cpp $(CFLAGS)

	cd Q4/ && \
	$(CXX) -c -o main.o  main.cpp $(CFLAGS) && \
	$(CXX) -c -o library.o  library.cpp $(CFLAGS) && \
	$(CXX) -o Q4.elf library.o main.o && \
	cd ../

symtab:
	@cd Q4/ && \
	[ -f Q4.elf ] && $(NM) $(NMFLAGS) Q4.elf 1> Q4.sym 2> /dev/null && \
	[ -f library.o ] && $(NM) $(NMFLAGS) library.o 1> library.sym 2> /dev/null && \
	[ -f main.o ] && $(NM) $(NMFLAGS) main.o 1> main.sym 2> /dev/null && \
	cd ../

	printf "symtab generation: done\n"

run:
	-[ -f Q1.elf ] && ./Q1.elf
	-[ -f Q2.elf ] && ./Q2.elf
	-[ -f Q3.elf ] && ./Q3.elf
	-cd Q4/ && [ -f Q4.elf ] && ./Q4.elf && cd ../

do-all:
	make compile && make run && make symtab && make clean

clean:
	-rm *.elf || rm *.o || rm *.sym 2> /dev/null
	-cd Q4/ && rm *.elf || rm *.o || rm *.sym && cd ../ 2> /dev/null