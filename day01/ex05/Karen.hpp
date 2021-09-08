#include <iostream>
#include <map>


class Karen{
    public:
        Karen();
        void    complain(std::string level);
    private:
       // std::map <std::string, void (Karen::*)()> fptr;
        void    debug();
        void    info();
        void    warning();
        void    error();
};
