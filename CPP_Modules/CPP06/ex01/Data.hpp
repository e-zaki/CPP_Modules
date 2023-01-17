#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data {
	int	x;
	int	y;
	char c;
	bool b;
};


uintptr_t	serialize(Data* ptr);

Data*		deserialize(uintptr_t raw);

#endif