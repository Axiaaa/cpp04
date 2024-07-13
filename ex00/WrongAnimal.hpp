#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {

    public :
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        string getType() const;
        void makeSound() const;

    protected :
        string type;
};

#endif 
