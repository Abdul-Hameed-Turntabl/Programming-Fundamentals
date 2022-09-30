# include <iostream>

namespace strlib
{
    int strlen(const char* s)
    {
        int size = 0;
        while(*(s++))
            size++;
        return size; 
    }

    /**
     * @brief  Copies string from one buffer to another with no bound checking.
     *          This makes its succeptible to buffer overruns. Don't use or use 
     *          with caution
     * @param  dest a pointer to the string to be copied
     * @param  src a pointer to the string to be copied to
     * @return a pointer to the string copied from src to dest
     * */
    char* strcpy(char* dest, const char* src)
    {
        if(dest == nullptr || src == nullptr)
            return nullptr;

        while((*dest++ = *src++));
        return dest;
    }

    /**
     * @brief  allocates memory for a string internally with the new[] operator. Do remember to
     * clean up with delete[] operator.
     * 
     * @param char* The string to capitalize
     * @return a pointer to the array of capitalized letters;
    */
    char* toupper(char* s)
    {
        if(s == nullptr)
            return nullptr;

        int len = strlen(s);
        char* cpy = s;

        char* up = new char[len+1];
        if(up == nullptr) return nullptr;
        up[len] = '\0';

        while(*cpy)
        {
            if((*cpy >= 97 && *cpy <= 122))
                *up = *cpy - 32;
            else
                *up = *cpy;

            up++;
            cpy++;
        }

        up -= len;
        return up;
    }

    char* strcat(char* _str1,const char* _str2)
    {
        if(_str1 == nullptr && _str2 == nullptr)
            return nullptr;

        size_t tlen = strlen(_str1) + strlen(_str2);

        char* cat_str = new char[tlen+1];
        if(cat_str == nullptr) return nullptr;
        cat_str[tlen] = '\0';

        char* cp_cat_str = cat_str;

        strcpy(cp_cat_str,_str1);
        cp_cat_str+=strlen(_str1);
        cp_cat_str[0] = 0xFF;
        strcpy(cp_cat_str,_str2);

        return cat_str;
    }
}

void exit_error(const char* message,int exit_code)
{
    std::cout << "[-] " << message << std::endl;
    exit(exit_code);
}

int main()
{
    char str[] = "Hello world";
    char* upper = strlib::toupper(str);

    if(!upper)
        exit_error("toupper failed",-1);
    
    char cp_str[12] = "Hello";

    std::cout << strlib::strcat(cp_str,"world") << std::endl;
    delete[] upper;
}