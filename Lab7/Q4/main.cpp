# include <iostream>

int local = 1234;
extern int global;

int main()
{
    std::cout << "[*] The global variable is: " << global << std::endl;
    std::cout << "[*] Local: " << local << std::endl;
    return 0;
}