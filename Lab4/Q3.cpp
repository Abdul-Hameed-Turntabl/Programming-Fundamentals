# include <iostream>
# include <cstring> 

std::string input(std::string str)
{
    std::string res;
    std::cout << str;
    std::getline(std::cin,res);
    return res;
}

char* reverse(const char* str)
{
    size_t len = strlen(str);
    char* rstr = new char[len];
    
    if(!rstr)
    {
        std::cout << "Memory allocation failed" << std::endl;
        exit(-1);
    }
    for(size_t i = 0; i < len; i++)
        rstr[len-i-1] = str[i];
    
    return rstr;
}

int main()
{
    auto s = input("[*] Enter a string to reverse: ");
    std::cout << reverse(s.c_str()) << std::endl;
    return 0;
}