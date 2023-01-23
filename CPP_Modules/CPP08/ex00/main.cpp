#include "easyfind.hpp"

// vector
// deque
// list
// forward_list

int main(void)
{

	std::vector<int> myVect;

	int arr[] = {1, 100, 7, 10, 33, 8};

	for (int i = 0; i < 6; i++)
		myVect.push_back(arr[i]);

	for (std::vector<int>::iterator it = myVect.begin(); it!=myVect.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	try {
		int idx = easyfind(myVect, 2);
		std::cout << myVect[idx] << " is at index " << idx << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::list<int> mylist;

	for (int i = 0; i < 6; i++)
		myVect.push_back(arr[i]);
	
	try {
		int idx = easyfind(myVect, 33);
		std::cout << myVect[idx] << " is at index " << idx << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	

}


// exception ElemNotFound definition

ElemNotFound::ElemNotFound(const std::string& message) : _message(message) {}
const char* ElemNotFound::what() const throw() { return _message.c_str(); }
ElemNotFound::~ElemNotFound() throw() {}