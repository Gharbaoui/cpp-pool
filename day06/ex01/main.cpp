#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	uintptr_t ip;
	Data *dp = new Data();
	dp->info = 120;
	ip = serialize(dp); // from data to uintptr_t

	std::cout << "data ptr: " << dp << std::endl;
	std::cout << "uintptr_t: " << ip << std::endl;

	std::cout << "deserialize"	 << std::endl;
	dp = NULL;
	std::cout << "data ptr before: " << dp << std::endl;
	dp = deserialize(ip);
	std::cout << "data ptr after: " << dp << std::endl;

	std::cout << "check info: " << dp->info << std::endl; 

}
