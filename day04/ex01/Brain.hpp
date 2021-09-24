#ifndef BRAIN
#define BRAIN

#include <iostream>

class Brain{
    public:
        Brain();
        ~Brain();
        Brain(Brain const &cp);
        Brain   &operator=(Brain const &rhs);
        void    announce() const;
    private:
        static const int size = 100;
        std::string ideas[size];
};

#endif
