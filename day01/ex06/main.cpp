#include "Karen.hpp"

char	to_lower(char c)
{
	return std::tolower(c);
}

int main(int args, char **argv)
{
    Karen k;
    std::vector<std::string>::iterator i;
    std::vector<std::string> a;
    bool    found;

    found = false;
    a.push_back("DEBUG");
    a.push_back("INFO");
    a.push_back("WARNING");
    a.push_back("ERROR");
    if (args == 2){
        for (i = a.begin(); i != a.end(); i++){
            if (argv[1] == *i)
                found = true;
            if (found)
            {
                std::cout << "[" << *i << "]" << std::endl;
                std::transform(i->begin(), i->end(), i->begin(), to_lower);
                k.complain(*i);
            }
        }
        if (!found)
            std::cout <<
            "[ Probably complaining about insignificant problems ]"
            << std::endl;
    }else{
        std::cout << "Not valid number of arguments" << std::endl;
    }
}
