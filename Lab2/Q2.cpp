#include <iostream>


/**
 * num -> 0x100
 * ref -> 0x100
 * */

int main(int argc, char* argv[])
{
    int num = 100;
    int *iptr = &num;
    int& ref = num;

    num = 5;
    (*iptr)++;
    ref++;

    std::cout << "The value of integer is: " << num << std::endl;
    std::cout << 0xf3f2 << std::endl;
    std::cout << 0437 << std::endl;
    std::cout << +'a' << std::endl;

    return 0;
}