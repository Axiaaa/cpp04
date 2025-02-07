#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        this->memory[i] = NULL;
}

MateriaSource::~MateriaSource () {
    for (int i = 0; i < 4; i++)
        if (this->memory[i] != NULL)
            delete this->memory[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    *this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
    if (&rhs != this)
        *this = rhs;
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m) {
        std::cout << "Cannot learn a null AMateria\n";
        return ;
    }
    for (int i = 0; i < 4; i++)
        if (this->memory[i] == NULL) {
            this->memory[i] = m; 
            return ;
        }
    std::cout << "Cannot learn " << m->getType() << ". There's no space left in the memory\n";
}

AMateria* MateriaSource::createMateria(string const & type) {
    for (int i = 0; i < 4; i++)
        if (memory[i])
            if (type == memory[i]->getType())
                return memory[i]->clone();
    std::cout << "Can't create " << type << ". The type is unknown\n";
    return NULL;
}