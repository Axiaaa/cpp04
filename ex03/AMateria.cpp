#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& copy)  { *this = copy; }

AMateria& AMateria::operator=(const AMateria& rhs) {
    if (&rhs != this)
        this->type = rhs.type;
    return *this;
}

AMateria::AMateria(std::string const &type) {
    this->type = type;
}

string const& AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter& target) {(void)target;}