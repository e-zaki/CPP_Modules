#include "Span.hpp"

Span::Span( void ) : _N(0) {

}

Span::Span( unsigned int N ) : _N(N) {

}

Span::Span( const Span& obj ) {
	this->operator=(obj);
}

Span& Span::operator=( const Span& obj ) {

	if (this != &obj) {
		this->_N = obj._N;
		this->myVector.clear();
		std::copy(obj.myVector.begin(), obj.myVector.end(), this->myVector.begin());
	}
	return *this;
}

Span::~Span( void ) {}

void	Span::addNumber( int nb ) {
	if (myVector.size() == _N) {
		throw SpanException("Span is full");
	}
	myVector.push_back(nb);
}

size_t	Span::shortestSpan( void ) {
	if (myVector.size() <= 1) {
		throw SpanException("No Span can be found") ;
	}

	std::sort(myVector.begin(), myVector.end());
	
	std::vector<int>::iterator it = myVector.begin();
	size_t	d = *(it + 1) - *it;
	for (it = myVector.begin() + 2; it != myVector.end(); ++it)
	{
		if (d > (size_t) (*it - *(it - 1))) {
			d = std::abs(*it - *(it - 1));
		}
	}

	return d;
}

size_t	Span::longestSpan( void ) {
	if (myVector.size() <= 1) {
		throw SpanException("No Span can be found") ;
	}
	
	std::vector<int>::iterator maxElement = 
		std::max_element(myVector.begin(), myVector.end());
	
	std::vector<int>::iterator minElement = 
		std::min_element(myVector.begin(), myVector.end());
	
	return std::abs(*maxElement - *minElement);
}

void	Span::addMultipleNbrs( int *arr , size_t N) {
	if (N + myVector.size() > _N) {
		throw SpanException("Too many elements requested to add to Span");
	}
	myVector.insert(myVector.end(), arr, arr + N);
}

SpanException::SpanException(const std::string& message) : _message(message) {}
const char* SpanException::what() const throw() { return _message.c_str(); }
SpanException::~SpanException() throw() {}