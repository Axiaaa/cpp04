#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource  {

    private : 
        AMateria* memory[4];

    public :

        MateriaSource();
        MateriaSource(const MateriaSource&);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource& rhs);

        void learnMateria(AMateria* m);
        AMateria* createMateria(string const &type);
};  


#endif