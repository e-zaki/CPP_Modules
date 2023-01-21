#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
public:
	Span( void );
	Span( unsigned int N );
	Span( const Span& obj );
	Span& operator=( const Span& obj );
	~Span( void ); 
	
	void	addNumber( int nb );
	void	addMultipleNbrs( int *arr, size_t N );
	size_t	shortestSpan( void );
	size_t	longestSpan( void );

private:
	size_t	_N;
	std::vector<int> myVector;
};

class SpanException : public std::exception {
public:
    SpanException(const std::string& message);
    virtual const char* what() const throw();
	~SpanException() throw();

private:
    std::string _message;
};

#endif