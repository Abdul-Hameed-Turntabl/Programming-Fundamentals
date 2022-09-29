# include <iostream>

/**
 * {
 *      i = 0;
 *      while(i < max_length)
 *      {
 *          if(input_line[i] == '?')
 *              count++;
 *          ++i;
 *      }
 * }
 * 
 * */

double perform_operation(double x,double y,char op)
{
    double res{};
    switch(op)
    {
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            res = x / y;
            break;
        default:
            break;
    }

    return res;
}

int main()
{
    double x;
    double y;
    char   op;

    std::cout << "[*] Enter a number: ";
    std::cin >> x;
    std::cout << "[*] Enter another number: ";
    std::cin >> y;

    std::cout << "[*] Enter the operation to perform [+-/*]: ";
    std::cin >> op;

    std::cout << perform_operation(x,y,op) << std::endl;

    return 0;
}