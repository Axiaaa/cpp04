#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; ++i)
        this->inventory[i] = NULL;
    for (int i = 0; i < 4; ++i)
        this->floor[i] = NULL;
}

Character::Character(const string s) : name(s) {
    for (int i = 0; i < 4; ++i)
        this->inventory[i] = NULL;
    for (int i = 0; i < 4; ++i)
        this->floor[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        if (this->inventory[i] != NULL) {
            delete this->inventory[i];}
        if (this->floor[i] != NULL)
            delete this->floor[i];
    }
}

Character& Character::operator=(const Character& rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            this->floor[i] = rhs.floor[i];
            this->inventory[i] = rhs.inventory[i];
        }
        this->name = rhs.name;
    }
    return *this;
}

Character::Character(const Character& copy) {
    *this = copy;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++)
        if (this->inventory[i] == NULL) {
            this->inventory[i] = m;
            return ;
        }
    std::cout << "Cant equip " << m->getType() << ". There's no space left in the inventory\n";
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
        std::cout << "The index is invalid\n";
        return ; 
    }
    if (this->inventory[idx] == NULL) {
        std::cout << "Cannot unequip nothing\n";
        return ; 
    }
    for (int i = 0; i < 4; i++)
        if (this->floor[i] == NULL) {
            this->floor[i] = this->inventory[idx];
            this->inventory[idx] = NULL;
            return ; 
        }
    std::cout << "Cant unequip " << this->inventory[idx]->getType() << ". There's no space left on the floor.\n";
}

void Character::use(int idx, ICharacter& target) {
     if (idx < 0 || idx > 3) {
        std::cout << "The index is invalid\n";
        return ; 
    }
    if (this->inventory[idx] == NULL) {
        std::cout << "Cannot use nothing\n";
        return ; 
    }
    this->inventory[idx]->use(target);
}


string const & Character::getName() const { return this->name; }