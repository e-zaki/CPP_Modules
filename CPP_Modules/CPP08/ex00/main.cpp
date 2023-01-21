#include "easyfind.hpp"

// vector
// array
// deque
// list
// forward_list

int main(void) {

	// std::vector<int> a = {1, 100, 7, 10}; --> error 
	// initializer Lists works only in C++11 and later Vs

	// int arr[] = {1, 100, 7, 10, 33, 8};
	std::vector<int> a = {44, 3,1,  37};
	// std::vector<int> a(arr, arr + sizeof(arr)/sizeof(int));

	try {
		int idx = easyfind(a, 1);
		std::cout << "nbr is at index " << idx << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}


// exception ElemNotFound definition

ElemNotFound::ElemNotFound(const std::string& message) : _message(message) {}
const char* ElemNotFound::what() const throw() { return _message.c_str(); }
ElemNotFound::~ElemNotFound() throw() {}