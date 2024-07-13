#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using std::string; 

class Animal {

    public :
    Animal();
    virtual ~Animal();
    Animal(const Animal&);
    Animal& operator=(const Animal& rhs);
    string getType() const;
    virtual void makeSound() const;

    protected :
        string type;
};

#endif