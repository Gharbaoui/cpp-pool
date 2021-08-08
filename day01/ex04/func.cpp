#include "main.hpp"


void    get_new_contant(std::string &content, char **args)
{
    std::fstream    file;
    int             i;
    int             contentIndex;

    contentIndex = 0;
    i = 0;
    file.open(args[1]);
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
    file.open(args[1], std::ios::out | std::ios::trunc); // empty file
    file << content; // write to file
    file.close(); //close file
}
