#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

    public : 
        void makeSound() const;
        Dog();
        ~Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog& rhs);
        string getType();
};


#endif