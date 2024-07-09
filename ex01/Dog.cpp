#include "Dog.hpp"

void Dog::makeSound() const {
    std::cout << "Woaf Woaf\n";
}

Dog::Dog() {
    std::cout << "New dog created\n";
    Animal::type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog destroyed\n";
    delete this->brain;
}


Dog& Dog::operator=(const Dog& rhs) {
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

Dog::Dog(const Dog& copy) : Animal() {
    std::cout << "New dog copy created\n";
    *this = copy;
}
