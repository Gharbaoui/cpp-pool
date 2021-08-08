#include "main.hpp"

int main(int argc, char **argv)
{
    std::fstream f;
    std::string content;

    if (argc == 4 && std::strlen(argv[2])){
        if (file_exits(argv[1]))
            get_new_contant(content, argv);
        else
            std::cout << "no file" << std::endl;
    }
    else
        std::cout << "args error" << std::endl;
}

bool    file_exits(char *name) // return true if file exist false if not
{
    FILE *f;
    f = fopen(name, "r");
    if (f)
    {
        fclose(f);
        return true;
    }
    return false;
}

void    replace_str(std::string &content, char **args, int start)
{
    int len;
    int i;
    int counter;
    
    i = -1;
    len = std::strlen(args[2]);
    counter = 0;
    while (content[start] && args[3][++i])
    {
        counter++;
        content[start] = args[3][i];
        start++;
    }
    if (counter < len){ // new string is smaller so we remove what left in content
        while (counter < len){
            content.pop_back();
            counter++;
        }
    }else{ // new string is longer so we add left back in new string to the content
        while (args[3][++i]){
            content.push_back(args[3][i]);
        }
    }
}
