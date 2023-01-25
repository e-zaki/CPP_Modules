#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T,Container>
{
public:
	MutantStack( void ) {};
	MutantStack( const MutantStack& obj ) { *this = obj; };
	MutantStack& operator=( const MutantStack& obj ) { (void) obj; return *this;};
	~MutantStack( void ) {};

    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }

};

#endif