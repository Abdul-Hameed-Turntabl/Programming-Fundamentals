# include <iostream>
# include <iomanip>
# include "./strlib.hpp"

constexpr int MAX_NUM = 256;

int main(int argc, char* argv[])
{
    char s1[85] = {0};
    char s2[85] = {0};
    char s3[85] = {0};
    
    std::cout << "[*] Enter password: ";
    std::cin >> std::setw(84) >> s1;
    std::cin >> std::setw(84) >> s2;
    std::cin >> std::setw(84) >> s3;

    char* str1 = strlib::strcat(s1,s2);
    char* cat_str = strlib::strcat(str1,s3);

    if(!strlib::strcmp("Hello world","Hello world"))
        std::cout << "[*] Strings are equal" << std::endl;
    
    std::cout << cat_str << std::endl;

    delete[] str1;
    delete[] cat_str;

    return 0;
}