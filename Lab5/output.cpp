# include <iostream>
# include <cstring>
# include <typeinfo>



void output(int i)
{
    std::cout << i << " " << " int " << std::endl;
}

void output(char c)
{
    std::cout << c << " " << " char " << std::endl;
}

void output(float f)
{
    std::cout << f << " " << " float " << std::endl;
}

void output(long l)
{
    std::cout << l << " " << " float " << std::endl;
}

void output(const char s[],size_t i = 0,size_t j = 0)
{
    if(j <= 0 || (j > strlen(s)))
        j = strlen(s);

    for(size_t k = i; k < j; k++)
        std::cout << s[k];

    std::cout << " const char* " << std::endl;
}