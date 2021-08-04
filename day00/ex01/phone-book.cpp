#include "phonebook.hpp"

int main()
{
    PhoneBook phone(0);
    std::string cmd;
    Account acc;
    do {
        std::cout << "CMD: " ;
        getline(std::cin, cmd);
        if (cmd == "ADD"){
            acc = get_account();
            phone.ADD(acc);
        }else if (cmd == "SEARCH"){
            phone.SEARCH();
        }
    }   while (cmd != "EXIT");
    
}

Account get_account()
{
    Account tmp;
    
    tmp.firstname = get_str("first name");
    tmp.lastname = get_str("last name");
    tmp.nickname = get_str("nickname");
    tmp.phone_number = get_str("phone number");
    tmp.darkest_secret = get_str("darkest secret");
    return tmp;
}

std::string get_str(std::string ask)
{
    std::string str;

    do {
        std::cout << ask << " :" ;
        getline(std::cin, str);
    } while (!good_str(str));
    return str;
}

bool good_str(std::string str)
{
    int i;

    i = -1;
    if (str.empty())
        return false;
    while (str[++i] && str[i] == ' ');
    
    if (str[i] == '\0')
        return false;
    return true;
}



bool    is_num(std::string num)
{
    for (char c : num)
        if (std::isdigit(c) == 0)
            return false;
    return true;
}

void	dispaly_word(std::string str)
{
	int i;

	i = -1;
	std::cout << "|";
	while (str[++i] && i < 9)
		std::cout << str[i];
	if (str[i] && i == 9)
		std::cout << ".";
	else
	{
		i--;
		while (++i < 10)
			std:: cout << " ";
	}
}
