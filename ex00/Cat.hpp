#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    
    public : 
        void makeSound() const;
        Cat();
        ~Cat();
        Cat(const Cat&);
        Cat& operator=(const Cat& rhs);
        string getType();
};

#endif