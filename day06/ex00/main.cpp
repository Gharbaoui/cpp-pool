#include "main.hpp"



int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 2 && std::strlen(argv[i]))
    {
        try{
            if (std::strlen(argv[i]) == 1 && !isdigit(argv[i][0]))
                from_char(argv[i][0]);
            else if (is_float(argv[i]))
                from_float(argv[i]);
            else if (is_double(argv[i]))
                from_double(argv[i]);
            else if (is_int(argv[i]))
                from_int(argv[i]);
            else if (std::string(argv[i]) == "nan" || std::string(argv[i]) == "nanf")
                from_nan();
            else
                std::cout << "UNKNOWN DATA TYPE" << std::endl;}
        }catch(...)
        {
            std::cout << "BAD input" << std::endl;
        }
    }else
        std::cout << "args error" << std::endl;
}
