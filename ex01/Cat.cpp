#include "Cat.hpp"

void Cat::makeSound() const {
    std::cout << "Meow Meow\n";
}

Cat::Cat() {
    std::cout << "New cat created\n";
    Animal::type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat destroyed\n";
    delete this->brain;
}

Cat& Cat::operator=(const Cat& rhs) {
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

Cat::Cat(const Cat& copy) : Animal() {
    std::cout << "New cat copy created\n";
    *this = copy;
}