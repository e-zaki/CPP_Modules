#include "Array.hpp"

template <typename T>

Array<T>::Array ( void ) :  _n(0), arr(NULL) {

}

template <typename T>

Array<T> ::Array( unsigned int n ) : _n(n), arr(NULL) {

	if (this->_n < 0) {
		throw OutOfRange("Invalid array size");
	}
	arr = new T[n];

	for (size_t i = 0; i < n; i++) {
		arr[i] = T();
	}

}

template <typename T>

Array<T> ::Array( const Array<T> & obj ) : arr(NULL) {

	this->operator=(obj);
}

template <typename T>

Array<T> & Array<T>::operator= ( const Array<T> & obj ) {

	if (this != &obj) {

		this->_n = obj.size();

		if (this->arr) {
			delete[] this->arr;
		}
		
		this->arr = new T[ this->_n ];

		for (size_t i = 0; i < obj.size(); i++) {
			arr[i] = obj.arr[i];
		}
	}

	return *this;
}

template <typename T>

Array<T> ::~Array( void ) {
	
	if (arr) {
		delete[] arr;
		arr = NULL;
	}
}

template <typename T>

unsigned int	Array<T>::size() const {
	return this->_n;
}

template <typename T>

T&		Array<T>::operator[]( size_t index ) {
	if (_n == 0 || index >= this->_n || index < 0) {
		throw OutOfRange("Array index out of range");
	}
	return arr[index];
}

template <typename T>

const T&	Array<T>::operator[]( size_t index ) const {

	if ( _n == 0 || index >= _n || index < 0) {
		throw OutOfRange("Array index out of range");
	}

	return arr[index];
}