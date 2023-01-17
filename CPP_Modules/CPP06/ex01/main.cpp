#include "Data.hpp"

int main(void)
{
	Data s;

	s.x = 13;
	s.y = 37;
	s.c = 'a';
	s.b = true;


	std::cout << "&s: " << &s << std::endl;

	uintptr_t iptr = serialize( &s );

	std::cout << "iptr: " << iptr << std::endl;

	Data	*ptr = deserialize( iptr );

	std::cout << "ptr: " << ptr << std::endl;

	std::cout << "s.x: " << s.x << std::endl;
	std::cout << "s.y: " << s.y << std::endl;
	std::cout << "s.c: " << s.c << std::endl;
	std::cout << "s.b: " << s.b << std::endl;
	
	return 0;
}