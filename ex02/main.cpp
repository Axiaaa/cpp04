#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "cstdlib"

int main(int ac, char **av)
{

    int len = 0;

    if (ac != 2)
        len = 50;
    else 
        len = atoi(av[1]) > 0 ? atoi(av[1]) : abs(atoi(av[1])) ;

    Animal **list = new Animal*[len];
    //Animal a; //Doesn't work if uncomment -> Abstract class

    int i = 0;
    for (i = 0; i < (len / 2); i++)
        list[i] = new Dog();
    for (; i < len; i++)
        list[i] = new Cat();
    for (int i = 0; i < len; i++)
        delete list[i];
    delete[] list;
    return 0;
}