#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
using std::string;

class Brain {
    public :
        Brain();
        ~Brain();
        Brain(const Brain&);
        Brain& operator=(const Brain& rhs);

    protected : 
    
        string ideas[100];
};

#endif