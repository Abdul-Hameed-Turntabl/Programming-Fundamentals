# include <iostream>

enum STATE {
    OFF,
    ON
};

STATE toggle()
{
    static STATE state = OFF;
    if(state == OFF)
        state = ON;
    else if(state == ON)
        state = OFF;
    return state;
}

int main()
{
    std::cout << toggle() << std::endl;
    std::cout << toggle() << std::endl;
    std::cout << toggle() << std::endl;
    std::cout << toggle() << std::endl;
    std::cout << toggle() << std::endl;
}