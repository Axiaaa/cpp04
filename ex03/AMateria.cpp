#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor called\n";
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called\n";
}

AMateria::AMateria(const AMateria& copy) {
    std::cout << "AMateria copy constructor called\n";
    *this = copy;
}

AMateria& AMateria::operator=(const AMateria& rhs) {
    if (&rhs != this)
        this->type = rhs.type;
    return *this;
}

AMateria::AMateria(std::string const &type) {
    std::cout << "AMateria constructor called\n";
    this->type = type;
}

string const& AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter& target) {}