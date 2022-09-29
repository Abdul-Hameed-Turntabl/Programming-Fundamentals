# include <iostream>
# include <string.h>
# include <iomanip>

struct data {
    char arr[10][256]{
        "Hello","Iamdoingwell","Iamokaybro",
        "Testexample","Abdul Hameed",
        "Cool kid","VoidBalaur@PetyaBlazer",
        "Deathmatrix@SlimeyPanda","Hello World",
        "TestExample"
        };
};

size_t get_max_indx(size_t vals[],size_t length)
{
    size_t __max = vals[0];
    size_t indx = 0;

    for(size_t k = 1; k < length; ++k)
    {
        if(__max < vals[k])
        {
            __max = vals[k];
            indx = k;
        }
    }

    return indx;
}

int main()
{
    data d;
    // for(int i = 0; i < 10; i++)
    // {
    //     std::cout << "Enter a string: ";
    //     std::cin >> std::setw(255) >> d.arr[i];
    // }

    size_t sizes[10];
    for(size_t j = 0; j < 10; j++)
        sizes[j] = strlen(d.arr[j]);

    std::cout << sizes[0] << std::endl;
    
    size_t max_indx = get_max_indx(sizes,10);

    std::cout << max_indx << std::endl;
    std::cout << sizes[max_indx] << std::endl;

    std::cout << std::string(d.arr[max_indx]) << std::endl;
    return 0;
}