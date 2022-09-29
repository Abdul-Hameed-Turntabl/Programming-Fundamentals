# include <iostream>

struct Int2 {
    int x;
    int y;
};

void input(Int2 &i)
{
    std::cout << "[*] Enter two numbers separated by space: ";
    std::cin >> i.x >> i.y;
}

int main()
{
    Int2 i;
    input(i);

    std::cout << i.x + i.y << std::endl;
    return 0;
}