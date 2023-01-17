#include "iter.hpp"

void display_array(const int *arr, size_t N)
{
	for (size_t i = 0; i < N; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

}

void display_elem(const int &n) {
	std::cout << n << " ";
}

void square(int &n) {
	n *= n;
	return ;
}

void negate(int &n) {
	n = -n;
	return ;
};

int main(void)
{
	int arr[7] = {1, 2 , 3, 4 , 5, 6, 7};
	display_array(arr, 7);
	iter(arr,7, negate);
	display_array(arr, 7);
	iter(arr, 7, square);
	iter(arr, 7, display_elem);

	return 0;
}