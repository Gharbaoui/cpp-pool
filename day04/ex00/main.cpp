#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"

int main()
{
    // animal test

   /* {
        Animal a;
        Animal b("AAAAAA");
        std::cout << b.getType() << std::endl;
        Animal d(a);
        std::cout << d.getType() << std::endl;
        Animal c;
        c = b;
        c.setType("newname");
        std::cout << c.getType() << std::endl;
    }*/



    /// Cat tests

/*    {
        Cat a;
        Cat b("CCCCCC");
        std::cout << b.getType() << std::endl;
        Cat d(a);
        std::cout << d.getType() << std::endl;
        Cat c;
        c = b;
        c.setType("cccnewname");
        std::cout << c.getType() << std::endl;
    }*/


    // Dog tests
/*
    {
        Dog a;
        Dog b("DDDDD");
        std::cout << b.getType() << std::endl;
        Dog d(a);
        std::cout << d.getType() << std::endl;
        Dog c;
        c = b;
        c.setType("DDDDnewname");
        std::cout << c.getType() << std::endl;
    }*/
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
    }

    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl;

        std::cout << std::endl;
        i->makeSound(); //will output the cat sound!
        std::cout << std::endl;
        meta->makeSound();
    }

}
