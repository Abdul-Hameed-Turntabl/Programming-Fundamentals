# include <iostream>

int* get_int()
{
    int* i = new int;
    if(i == nullptr)
        return nullptr;
    std::cout << "[*] Enter an integer: " << std::endl;
    std::cin >> *i;

    return i;
}

int main()
{
    int* int_ptr = get_int();
    
    std::cout << *int_ptr << std::endl;
    delete int_ptr;
    
    return 0;
}