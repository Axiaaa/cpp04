#include "Ice.hpp"

Ice::Ice() { this->type = "ice"; }

Ice::~Ice() {}

Ice::Ice(const Ice& copy) : AMateria(copy) {
    *this = copy;
}

Ice& Ice::operator=(const Ice& rhs) {
    if (&rhs != this)
        this->type = rhs.type;
    return *this;
}

AMateria* Ice::clone() const {  return new Ice(*this); }

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}