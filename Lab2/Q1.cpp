# include <iostream>

const int num = 0;
const int * ptr_num = &num;

enum {
    RED,
    YELLOW,
    AMBER=YELLOW,
    GREEN
};


int rgb[3];

int main(int argc, char *argv[])
{
    //rgb[RED] = 234;

    std::cout << "RED --> " << (char)RED << std::endl;
    std::cout << "YELLOW --> " << YELLOW << std::endl;
    std::cout << "AMBER --> " << AMBER << std::endl;
    std::cout << "GREEN --> " << GREEN << std::endl;

    return 0;
}