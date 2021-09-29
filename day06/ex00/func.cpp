#include "main.hpp"

bool    is_float(char *num)
{
    if (num[std::strlen(num) - 1] != 'f')
        return false;
    if (*num == '-' || *num == '+')
        num++;
    if (is_number(num) || isInff(num))
        return true;
    return false;
}

bool    is_int(char *num)
{
    int i;

    i = 0;
    if (*num == '-' || *num == '+')
        num++;
    while (num[i])
    {
        if (!isdigit(num[i]))
            return false;
        i++;
    }
    return true;
}


bool    is_double(char *num)
{
    if (*num == '-' || *num == '+')
        num++;
    if (is_number_d(num) || isInfd(num))
    {
        return true;
    }
    return false;
}

bool    isInff(char *num)
{
    if (std::string("inff") == num)
        return true;
    return false;
}

bool    isInfd(char *num)
{
    if (std::string("inf") == num)
        return true;
    return false;
}


bool    is_number_d(char *num)
{
    int i;
    bool passed;

    passed = false;
    i = 0;
    while (num[i])
    {
        if (!isdigit(num[i])) {
            if (!passed && num[i] == '.')
            {
                if (i == 0)
                    return false;
                passed = true;
            }
            else
                return false;
        }
        i++;
    }
    if (num[i - 1] == '.' || !passed)
        return false;
    return true;
}

bool    is_number(char *num)
{
    int i;
    bool passed;

    passed = false;
    i = 0;
    while (num[i] && num[i + 1])
    {
        if (!isdigit(num[i])) {
            if (!passed && num[i] == '.')
            {
                if (i == 0)
                    return false;
                passed = true;
            }
            else
                return false;
        }
        i++;
    }
    if (num[i - 1] == '.')
        return false;
    return true;
}
