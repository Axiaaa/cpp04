#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "New WrongAnimal created\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    std::cout << "New WrongAnimal copy created\n";
    *this = copy;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

string WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const {
    std::cout << "I'm a WrongAnimal sound ;-;\n";
}