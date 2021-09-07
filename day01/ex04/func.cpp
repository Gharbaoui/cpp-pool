#include "main.hpp"

std::string get_new_name(char *name) /// return new file name
{
	std::string new_name;
	for (int i = 0; name[i]; i++) {
		new_name.push_back(std::toupper(name[i]));
	}

	new_name += ".replace";
	return new_name;
}

void    get_new_contant(std::string &content, char **args)
{
    std::fstream    file (args[1]);
	std::ofstream	newfile;
    int             i;
    int             contentIndex;

    contentIndex = 0;
    i = 0;
    for (char c; file.get(c); content.push_back(c)){
        if (args[2][i] == 0){
            replace_str(content, args, contentIndex); // work here
            contentIndex += std::strlen(args[3]) + 1;
            i = 0;
        }
        else if (c == args[2][i]){
            i++;
        }else{
            if (i)
                contentIndex += i + 1; // because i starts 0
            else
                contentIndex++;
            i = 0;
        }
    }
    file.close();
    newfile.open(get_new_name(args[1]), std::ios::out | std::ios::trunc); // empty file
    newfile << content; // write to file
    newfile.close(); //close file
}
