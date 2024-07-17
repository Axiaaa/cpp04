#include "Cure.hpp"

Cure::Cure() { this->type = "cure"; }

Cure::~Cure() {}

Cure::Cure(const Cure& copy) : AMateria(copy) {
    *this = copy;
}

Cure& Cure::operator=(const Cure& rhs) {
    if (&rhs != this)
        this->type = rhs.type;
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
