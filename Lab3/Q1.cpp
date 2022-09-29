# include <iostream>

/**
 * ((!(i < limit-1)) || (!( (c=getchar()) != '\n') || (c != 'A'))
*/

unsigned int rotate(unsigned int s,unsigned int r)
{
    return (s << r);
}

int main(int argc, char* argv[])
{
    std::cout << rotate(100,3) << std::endl;
    return 0;
}