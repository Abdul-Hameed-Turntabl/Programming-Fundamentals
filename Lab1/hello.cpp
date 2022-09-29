# include <iostream>
# include <cstring>

/**
 * Swaps array elements from a given index to another index.
 * */
void swap_arr(int *nums[], int i, int j)
{
    int temp;
    temp = (*nums)[i];
    (*nums)[i] = (*nums)[j];
    (*nums)[j] = temp;
}

/**
 * The comparison function for qsort
 */
int cmp(const void *_x,const void *_y)
{
    int *x = (int*)(_x);
    int *y = (int*)(_y);
    if(*x < *y )
        return -1;
    if(*x > *y)
        return 1;
    return 0; 
}

/**
 * Performs an inplace sort
 * */
void sort(int *nums[],int size)
{
    if(nums == nullptr && *(nums) == nullptr)
    {
        std::cerr << "Cannot read from a null pointer" << std::endl;
        exit(-1);
    }
    
    qsort(*nums,(size_t)size,sizeof(int),&cmp);
}

void print_array(int nums[],int size)
{
    std::cout << "{ ";
    for(int k = 0; k < size; k++)
        std::cout << nums[k] << " , ";
    std::cout << " } " << std::endl;
}

/**
 * Finds the median of a set of numbers
 */
int median(int nums[],int size)
{
    sort(&nums,size);
    if(size%2 == 0)
    {
        int median_index = size/2;
        return (int)(nums[median_index] + nums[median_index+1])/2;
    }

    int median_index = size/2;
    return nums[median_index];
}

/**
 * Calculates the mean of a group of numbers
*/
double mean(int nums[],int size)
{
    if(!nums)
    {
        std::cerr << "Cannot deference a null pointer" << std::endl;
        exit(-1);
    }
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += nums[i];
    return ((double)(sum))/(size);
}

void get_input(int *nums[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int tmp = 0;
        std::cout << "Enter a number: ";
        std::cin >> tmp;
        (*nums)[i] = tmp;
    }
}

/**
 * @brief It looks through the array to find the given element. 
 *        If it does not find one it  return -1. if it finds one
 *        it returns its index.
 * @param nums a pointer to an integer array
 * @param size the size of the input array
 * @param element the element which we want to find
 * @return -1 or the index of the element found
 */
int contains(int nums[],int size,int element)
{
    for(int i = 0; i < size; i++)
    {
        if(nums[i] == element)
            return i;
    }
    return -1;
}

/**
 * @brief Finds all the unique elements in an array
 * @param nums pointer to the integer array
 * @param in_size size of the input array
 * @param out_arr a pointer to the pointer to the integer array
 * @return the size of the mode array
 */
int find_unique(int nums[],int in_size,int** outarr)
{
    int *unique_elements = (int*)(malloc(sizeof(int)*in_size));
    if(!unique_elements)
    {
        std::cerr << "Memory allocation failed" << std::endl;
        exit(errno);
    }
    memset(unique_elements,0xFFFFFFFF,in_size*sizeof(int));

    int uindx = 0;
    unique_elements[0] = nums[0];
    uindx++;

    for(int i = 0; i < in_size; i++)
    {
        if(contains(unique_elements,in_size,nums[i]) == -1)
        {
            unique_elements[uindx++] = nums[i];
            continue;
        }
    }

    outarr = &unique_elements;
    return uindx+1;
}


/**
 * 
 * */
void mode(int nums[],int size, int **_mode_arr,int *mode_size)
{

}

int main(int argc, char* argv[])
{

    int len = 5;
    int *nums = (int*)(malloc(sizeof(int)*len));
    if(!nums)
    {
        std::cerr << "Memory allocation failed" << std::endl;
        return errno;
    }

    get_input(&nums,len);
    int * out_arr = nullptr;
    int u_size = find_unique(nums,len,&out_arr);
    print_array(out_arr,u_size);
    print_array(nums,len);

    std::cout << "The median is: " << median(nums,len) << std::endl;
    std::cout << "The mean is: " << mean(nums,len) << std::endl;
    free(nums);

    return 0;
}