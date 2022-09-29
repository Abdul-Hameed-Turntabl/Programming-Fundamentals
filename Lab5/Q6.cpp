# include <iostream>

constexpr unsigned long long factorial(unsigned long long n)
{
    if(n == 0 || n == 1)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    std::cout << factorial(10) << std::endl;
}