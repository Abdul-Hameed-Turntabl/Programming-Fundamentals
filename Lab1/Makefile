CXX=g++
CFLAGS= -O3 -g -Wall -Werror --std=c++17
GDB=gdb



compile:
	$(CXX) hello.cpp -o hello.o $(CFLAGS)
	$(CXX) test.cpp -o test.o $(CFLAGS)

run_hello:
	[ -f hello.o ] && ./hello.o

run_test:
	[ -f test.o ] && ./test.o

clean:
	rm *.o

debug:
	$(read -p "[*] Enter filename: ")
	$(GDB) ${REPLY}

