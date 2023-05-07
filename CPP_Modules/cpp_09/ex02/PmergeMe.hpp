#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>

void merge_v(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right);
void insertionSort_v(std::vector<int>& arr, int left, int right);
void mergeInsertionSort_v(std::vector<int>& arr, int left, int right);
void merge_dq(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right);
void insertionSort_dq(std::deque<int>& arr, int left, int right);
void mergeInsertionSort_dq(std::deque<int>& arr, int left, int right);
int nonPositiveInteger(char *str);

#endif