#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string &stringREF = str;
    std::string *stringPTR = &str;

    std::cout << "string address: " << &str << std::endl;
    std::cout << "string address by ref: " << &stringREF << std::endl;
    std::cout << "string address by ptr: " << stringPTR << std::endl;

    std::cout << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    
}
