#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    if (ac == 1)
        return 0;

    std::vector<int> arr1;
    std::deque<int> arr2;
    int n;
    clock_t start1;
    clock_t start2;
    clock_t end1;
    clock_t end2;

    for (int i = 1; i < ac; i++) {
        if (nonPositiveInteger(av[i])) {
            std::cerr << "Error\n";
            return 1;
        }
        n = std::atoi(av[i]);
        arr1.push_back(n);
    }
    
    std::cout << "Before: ";
    
    std::vector<int>::iterator it = arr1.begin();
    for ( ; it != arr1.end(); ++it)
    {
        std::cout << " " << *it;
        arr2.push_back(*it);
    }

    start1 = std::clock();
    mergeInsertionSort_v(arr1, 0, arr1.size() - 1);
    end1 = std::clock();
    
    start2 = std::clock();
    mergeInsertionSort_dq(arr2, 0, arr2.size() - 1);
    end2 = std::clock();
    
    std::cout << "\n";
    std::cout << "After:  ";
    it = arr1.begin();
    for ( ; it != arr1.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << "\n";

    double time_taken1 = double(end1 - start1) / CLOCKS_PER_SEC * 1000000;
    double time_taken2 = double(end2 - start2) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << arr1.size() << " elements with std::vector<int> : " 
              << std::fixed << std::setprecision(5) << time_taken1 << " us\n";
    std::cout << "Time to process a range of " << arr2.size() << " elements with std::deque<int>  : " 
              << std::fixed << std::setprecision(5) << time_taken2 << " us\n";
    return 0;
}
