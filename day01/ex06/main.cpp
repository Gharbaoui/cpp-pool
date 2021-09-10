#include "Karen.hpp"

int main(int args, char **argv)
{
	Karen k;
	bool	start;

	start = false;
	std::string  names[num_mem] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (args == 2) {
		for (int i = 0; i < num_mem; i++) {
			if (names[i] == argv[1])
				start = true;
			if (start) {
				std::cout << "[" << names[i] << "]" << std::endl;
				k.complain(names[i]);
			}
		}
		if (!start) {
            std::cout <<
            "[ Probably complaining about insignificant problems ]"
            << std::endl;
		}
	} else {
        std::cout << "Not valid number of arguments" << std::endl;
	}
}
