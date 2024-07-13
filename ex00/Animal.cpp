#include "Animal.hpp"

Animal::Animal(): type("Animal") {
    std::cout << "New animal created\n"; 
}

Animal::~Animal() {
    std::cout << "Animal destroyed\n";
}

Animal::Animal(const Animal& copy) {
    std::cout << "New animal copy created\n";
    *this = copy;
}

Animal& Animal::operator=(const Animal& rhs) {

    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

string Animal::getType() const { return this->type; }

void Animal::makeSound() const {
    ;
}