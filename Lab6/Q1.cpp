# include <iostream>

int main()
{
    std::string str;
    std::cout << "[+] Enter a string: ";
    std::cin >> str;
    auto c = str.c_str();

    while(*c != '\0')
    {
        std::cout << *c;
        c++;
    }

    std::cout << "\n";
}