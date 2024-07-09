#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* i = new WrongCat();
    const Animal* j = new Dog();
    const Animal* k = new Cat();
    const WrongAnimal* meta2 = new WrongAnimal(*i);
    Animal u(*j);

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;   
    std::cout << meta2->getType() << " " << std::endl;
    std::cout << u.getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    k->makeSound();
    meta2->makeSound();
    u.makeSound();

    delete meta;
    delete j;
    delete i;
    delete k;
    delete meta2;
    return 0;
}