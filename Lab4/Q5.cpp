# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

constexpr int MAX_WORDS = 5;

std::string input(std::string str)
{
    std::string res;
    std::cout << str;
    std::getline(std::cin,res);
    return res;
}

size_t get_max(std::vector<size_t> v)
{
    size_t max = v[0];
    for(auto e: v)
    {
        if(max < e)
            max = e;
    }

    return max;
}

size_t get_index(std::vector<size_t> v, size_t e)
{
    std::vector<size_t>::iterator it;
    if((it = std::find(v.begin(),v.end(),e)) != v.end())
        return std::distance(v.begin(),it);
    return -1;
}

int main(int argc, char* argv[])
{
    std::vector<std::string> words;
    std::vector<size_t> sizes;

    for(size_t i = 0; i < MAX_WORDS; i++)
    {
        std::string str = input("[*] Enter a word: ");
        words.push_back(str);
        sizes.push_back(str.size());
    }

    size_t max = get_max(sizes);
    size_t indx = get_index(sizes,max);

    if(indx == (size_t)-1)
    {
        std::cout << "Could not find max" << std::endl;
        return -1;
    }

    std::cout << indx << std::endl;

    std::cout << words[indx] << std::endl;
}