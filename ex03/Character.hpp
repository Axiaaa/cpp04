#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

    private :
        AMateria* inventory[4];
        AMateria* floor[4];
        string name;

    public : 

        Character();
        Character(const string name);
        ~Character();
        Character(const Character&);
        Character& operator=(const Character& rhs);

        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        string const & getName() const;

};

#endif