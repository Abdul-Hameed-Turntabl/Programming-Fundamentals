#include <iostream>

int factorial(int n)
{
    
    if(!n)
        return 1;
        
    int f = 1;
    for(int iter = 1; iter <= n; ++iter)
        f = f * iter;
    
    return f;
}

int main()
{
    std::cout << "Please enter an integer: ";
    int n;
    std::cin >> n;

    if(n > 0)
        std::cout << "Congratulations! " << n << " is a natural number." << std::endl;
    
    else
        std::cout << n << " is not a natural number." << std::endl;
    
    return EXIT_SUCCESS;
}