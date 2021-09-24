#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void    fill_animal(Animal **animal, int size)
{

    int n = size / 2;

    for (int i = 0; i < n; i++)
        animal[i] = new Dog();

    for (int j = n; j < size; j++)
        animal[j] = new Cat();
}

int main()
{
/*    int size = 10;
    Animal *animal[size];

    fill_animal(animal, size);
    std::cout << std::endl << std::endl; 
    for (int i = 0; i < size; i++)
        delete animal[i];
*/
    // deep copy test
   /* {
        Dog d;
        Dog s(d);

        std::cout << "S  " << s.getBrain() <<std::endl; 
        std::cout << "D  " << d.getBrain() <<std::endl << std::endl; 
        
        Cat c;
        Cat e(c);

        std::cout << "C  " << c.getBrain() <<std::endl; 
        std::cout << "E  " << e.getBrain() <<std::endl << std::endl; 
    }*/
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete j;//should not create a leak
    delete i; 
}

