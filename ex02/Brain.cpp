#include "Brain.hpp"


Brain::Brain() {
    std::cout << "A brain is created\n";
}

Brain::~Brain() {
    std::cout << "A brain is destroyed\n";
}

Brain::Brain(const Brain& copy) {   *this = copy;   }

Brain& Brain::operator=(const Brain& rhs) {
    if (this != &rhs)
        for (int i = 0; i <= 100; ++i)
            this->ideas[i] = rhs.ideas[i];
    return *this;
}

