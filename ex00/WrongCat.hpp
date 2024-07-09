#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    
    public : 
        void makeSound() const;
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat&);
        WrongCat& operator=(const WrongCat& rhs);
        string getType() const;
};

#endif