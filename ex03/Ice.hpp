#include "AMateria.hpp"


class Ice : public AMateria {

    public : 
        Ice();
        ~Ice();
        Ice& operator=(const Ice& rhs);
        Ice(const Ice&);

        virtual AMateria* clone() const;
};