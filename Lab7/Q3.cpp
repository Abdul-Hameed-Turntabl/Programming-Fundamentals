# include <iostream>

int main()
{
    int len = 6;
    int* ints = new int[len] {10,20,30,40,50,60};

    int i = 0;
    while(i < 6)
    {
        std::cout << ints[i] << " ";
        i++;
    }

    std::cout << std::endl;
}