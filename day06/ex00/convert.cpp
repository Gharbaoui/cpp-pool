#include "main.hpp"

void    from_char(char c)
{
    std::cout << "CHAR: " << c << std::endl;
    std::cout << "INT: " << static_cast<int>(c) << std::endl;
    std::cout << "FLOAT: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "DOUBLE: " << static_cast<double>(c) << ".0" << std::endl;

}

void    from_float(char *fl)
{
    char *str = fl;
    std::string rest;
    float f;

    if (*str == '-' || *str == '+')
        str++;
    if (std::string ("inff") == str)
    {
        std::cout << "CHAR: " << "impossible" << std::endl;
        std::cout << "INT: " << "impossible" << std::endl;
        std::cout << "FLOAT: " << fl << std::endl;
        fl[std::strlen(fl) - 1] = 0;
        std::cout << "DOUBLE: " << fl << std::endl;
    }else {
        f = std::stof(fl);
        std::cout << "CHAR: ";
        if (f >= 32 && f <= 126)
            std::cout << static_cast<char>(f) << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "INT: ";
        if ((double)f >= INT_MIN && (double)f <= INT_MAX)
            std::cout << static_cast<int>(f) << std::endl;
        else
            std::cout << "impossible" << std::endl;
        
        if (!bool(int(f) - f))
            rest = ".0";
        else
            rest = "";
        std::cout << "FLOAT: " << f << rest << "f" << std::endl;
        std::cout << "DOUBLE: " << static_cast<double>(f) << rest << std::endl;
    }
}


void from_double(char *dl)
{
    char *str = dl;
    float fmin, fmax;
    std::string rest;
    double d;

    fmax = 1.0f / 0.0f;
    fmin = -1.0f/0.0f;
    if (*str == '-' || *str == '+')
        str++;
    if (std::string ("inf") == str)
    {
        std::cout << "CHAR: " << "impossible" << std::endl;
        std::cout << "INT: " << "impossible" << std::endl;
        std::cout << "FLOAT: " << dl << "f" <<  std::endl;
        std::cout << "DOUBLE: " << dl << std::endl;
    }else {
        d = std::stod(dl);
        std::cout << "CHAR: ";
        if (d >= 32 && d <= 126)
            std::cout << static_cast<char>(d) << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
        std::cout << "INT: ";
        if (d >= INT_MIN && d <= INT_MAX)
            std::cout << static_cast<int>(d) << std::endl;
        else
            std::cout << "impossible" << std::endl;
        if (d == round(d))
            rest = ".0";
        else
            rest = "";


        std::cout << "FLOAT: ";
        if (d >= fmin  && d <= fmax)
            std::cout << static_cast<float>(d)  << rest <<"f" <<std::endl;
        else
            std::cout << "impossible" << std::endl;


        std::cout << "DOUBLE: " << static_cast<double> (d) << rest << std::endl;

    }
}


void    from_int(char *num)
{
    int n;
    float fmin, fmax;

    fmax = 1.0f / 0.0f;
    fmin = -1.0f / 0.0f;
    n = std::stoi(num);
    std::cout << "CHAR: ";
    if (n >= 32 && n <= 126)
        std::cout << static_cast<char>(n) << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "INT: " << n << std::endl;
    std::cout << "FLOAT: ";
    if (n >= fmin  && n <= fmax)
        std::cout << static_cast<float>(n)  << ".0f" <<std::endl;
    else
        std::cout << "impossible" << std::endl;
    std::cout << "DOUBLE: " << static_cast<double>(n) << ".0" << std::endl;
}

void    from_nan()
{
    std::cout << "CHAR: impossible" << std::endl;
    std::cout << "INT: impossible" << std::endl;
    std::cout << "FLOAT: nanf" << std::endl; 
    std::cout << "DOUBLE: nan" << std::endl; 
}
