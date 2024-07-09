#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "New WrongCat created\n";
    this->type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed\n";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal() {
    std::cout << "New WrongCat copy created\n";
    *this = copy;
};

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

string WrongCat::getType() const {
    return this->type;
}
void WrongCat::makeSound() const {
    std::cout << "I'm a WrongCat sound ;-;\n";
}