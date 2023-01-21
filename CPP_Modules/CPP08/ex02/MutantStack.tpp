#include "MutantStack.hpp"

t
MutantStack::MutantStack( void ) {

}

MutantStack::MutantStack( const MutantStack& obj ) {

	*this = obj;
}

MutantStack& MutantStack::operator=( const MutantStack& obj ) {
    (void) obj;
    return *this;
}

MutantStack::~MutantStack( void ) {}

MutantStack::iterator begin() { return this->c.begin(); }

MutantStack::iterator end() { return this->c.end(); }

MutantStack::const_iterator begin() const { return this->c.begin(); }

MutantStack::const_iterator end() const { return this->c.end(); }
