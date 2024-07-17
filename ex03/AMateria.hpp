#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

using std::string;

#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
    protected : 
        string type;

    public :
    AMateria(std::string const & type);
    AMateria();
    virtual ~AMateria();
    AMateria& operator=(const AMateria& rhs);
    AMateria(const AMateria&);
    string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
     
};


#endif