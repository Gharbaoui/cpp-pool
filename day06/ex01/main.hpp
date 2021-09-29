#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

typedef struct{
	int info;
}Data;
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif
