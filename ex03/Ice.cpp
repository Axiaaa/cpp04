#include "Ice.hpp"

Ice::Ice() {
    this->type = "ice";
    std::cout << "Ice default constructor called\n";
}

Ice::~Ice() {
    std::cout << "Ice destructor called\n";
}

Ice::Ice(const Ice& copy) {
    std::cout << "Ice copy constructor called\n";
    *this = copy;
}

Ice& Ice::operator=(const Ice& rhs) {
    if (&rhs != this)
        this->type = rhs.type;
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

