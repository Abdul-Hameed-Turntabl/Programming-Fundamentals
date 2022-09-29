# include <iostream>
# include <iomanip>
# include <cstring>



int main(int argc, char* argv[])
{
    char str[] = "hello-this-is-a-line-of-input";
    char* token;
    
    token = strtok(str,"-");
    while((token = strtok(NULL,"-")))
        std::cout << "[" << strlen(token) << "] " << token << std::endl;
    
}