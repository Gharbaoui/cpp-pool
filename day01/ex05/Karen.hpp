#include <iostream>

#define num_mem 4
class Karen{
    public:
        Karen();
        void    complain(std::string level);
    private:
	 	void	(Karen::*mfsp[num_mem])(void);
		std::string	mfsn[num_mem];
        void    debug();
        void    info();
        void    warning();
        void    error();
};
