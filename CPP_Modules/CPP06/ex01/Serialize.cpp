#include "Data.hpp"


uintptr_t serialize(Data* ptr) {

	uintptr_t	s = reinterpret_cast<uintptr_t> (ptr);

	return s;
}

Data* deserialize(uintptr_t raw) {

	Data	*ptr = reinterpret_cast<Data*> (raw);

	return ptr;
}