#include <fstream>
#include <iostream>
#include <cstring>

void    get_new_contant(std::string &content, char **args);
void    replace_str(std::string &content, char **args, int start);
bool    file_exits(char *name);
