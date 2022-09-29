#include <iostream>
#include <cmath>

/**
Using a single 
while
 statement (with an empty body) and comma operators, write a program that displays 10 powers of 2.
 **/

int main()
{
    int i = 0;
    unsigned long long ptr = (unsigned long long)&i;
    unsigned long long& ref = ptr;
    //ptr = NULL;

    std::cout << *((int*)(ref)) << std::endl;

    while((std::cout << (2 << i) << std::endl ,++i < 10));
    return 0;
}