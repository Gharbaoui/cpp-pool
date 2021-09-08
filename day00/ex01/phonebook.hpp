#include <iostream>

#define arr_size 8

class Account{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook
{
    public:
        PhoneBook();
        PhoneBook(int index);
        void    ADD(Account acc);
        void    SEARCH();
        void    ASK();
        void    dispaly_raw(int index);
        void    display_info(int index);
    private:
        int index;
        Account acc[arr_size];
};


Account get_account();
std::string get_str(std::string ask);
bool good_str(std::string str);
void	dispaly_word(std::string str);
bool    is_num(std::string num);
