#include "Cure.hpp"

Cure::Cure() {
    this->type = "cure";
    std::cout << "Cure default constructor called\n";
}

Cure::~Cure() {
    std::cout << "Cure destructor called\n";
}

Cure::Cure(const Cure& copy) {
    std::cout << "Cure copy constructor called\n";
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

