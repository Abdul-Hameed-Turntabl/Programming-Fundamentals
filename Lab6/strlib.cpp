# include "./strlib.hpp"

//using size_t = unsigned long long;

int strlib::strlen(const char* s)
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
char* strlib::strcpy(char* dest, const char* src)
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
char* strlib::toupper(char* s)
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


char* strlib::strcat(char* _str1,const char* _str2)
{
    if(_str1 == nullptr && _str2 == nullptr)
        return nullptr;

    int tlen = strlen(_str1) + strlen(_str2);

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

int strlib::strcmp(const char* s1,const char* s2)
{
    auto sc1 = s1;
    auto sc2 = s2;

    while(((*sc1++ != 0) && (*sc2++ != 0)))
    {
        if(*sc1 > *sc2)
            return 1;
        else if(*sc1 < *sc2)
            return -1;
    }
    return 0;
}