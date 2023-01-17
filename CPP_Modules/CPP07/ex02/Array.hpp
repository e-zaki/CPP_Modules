#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

public:
		Array( void );
		Array( unsigned int n );
		Array( const Array<T> & obj );
		Array<T> & operator= ( const Array<T> & obj );
		~Array( void );

		unsigned int size() const;

		T&			operator[](size_t index);
		const T&	operator[](size_t index) const;

private:
		size_t _n;
		T	*arr;
};

class OutOfRange : public std::exception {
public:
    OutOfRange(const std::string& message);
    virtual const char* what() const throw();
	~OutOfRange() throw();

private:
    std::string _message;
};

#include "Array.tpp"

#endif