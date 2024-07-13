#include "Cat.hpp"

void Cat::makeSound() const {
    std::cout << "Meow Meow\n";
}

Cat::Cat() {
    std::cout << "New cat created\n";
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat destroyed\n";
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
