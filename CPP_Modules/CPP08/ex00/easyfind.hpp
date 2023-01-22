#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

#define ITERATOR(container) container::iterator
// std::vector<T>::iterator, std::list<T>::iterator, std::deque<T>::iterator, ..

class ElemNotFound : public std::exception {
public:
    ElemNotFound(const std::string& message);
    virtual const char* what() const throw();
	~ElemNotFound() throw();

private:
    std::string _message;
};

template <typename T>

size_t	easyfind(T Container, int toFind) {
	
	ITERATOR(typename T) it;

	it = std::find(Container.begin(), Container.end(), toFind);

	if (it == Container.end()) {
		throw ElemNotFound("\033[0;31m>>>> Element not found :(\033[0;37m");
	}
	else {
		size_t index = std::distance(Container.begin(), it);
		return index;
	}

}


#endif