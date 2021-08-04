#include "phonebook.hpp"

PhoneBook::PhoneBook()
{}

PhoneBook::PhoneBook(int index)
{
    this->index = index;
}

void    PhoneBook::ADD(Account acc)
{
    if (index < arr_size){
        this->acc[index] = acc;
        index++;
    }else
        this->acc[arr_size - 1] = acc;
}

void    PhoneBook::SEARCH()
{
    int i;

    i = -1;
    if (index > 0)
        std::cout << "|  Index   |First Name| Last Name| Nick Name|\n";
    else{
   		std::cout << "empty phone book\n";
        return ;
    }

    while (++i < index)
        dispaly_raw(i);
    ASK();
}

void    PhoneBook::dispaly_raw(int index)
{
	std::cout << "|    " << index << "     ";
	dispaly_word(acc[index].firstname);
	dispaly_word(acc[index].lastname);
	dispaly_word(acc[index].nickname);
	std::cout << "|\n";
}

void    PhoneBook::ASK()
{
    int	i;
    std::string str;

	std::cout << "Enter the index of a contact: ";
    do {
        getline(std::cin, str);
    } while (!good_str(str));
    if (!is_num(str))
    {
        std::cout << "not a number!" << std::endl;
        return ;
    }
    i = std::stoi(str);
	if (i <= index - 1)
		display_info(i);
	else
		std::cout << "Not Valid Index\n";
}

void	PhoneBook::display_info(int index)
{
	std::cout << acc[index].firstname << "\n";
	std::cout << acc[index].lastname << "\n";
	std::cout << acc[index].nickname << "\n";
	std::cout << acc[index].darkest_secret << "\n";
	std::cout << acc[index].phone_number << "\n";
}
