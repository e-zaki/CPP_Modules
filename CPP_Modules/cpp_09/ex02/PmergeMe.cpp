#include "PmergeMe.hpp"

const int CHUNK_SIZE = 5;

void merge_v(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right) {
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while (i < left.size()) {
        arr[k++] = left[i++];
    }
    while (j < right.size()) {
        arr[k++] = right[j++];
    }
}

void insertionSort_v(std::vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void mergeInsertionSort_v(std::vector<int>& arr, int left, int right) {
    if (right - left <= CHUNK_SIZE) {
        insertionSort_v(arr, left, right);
    } else {
        int mid = (left + right) / 2;
        std::vector<int> leftArr(mid - left + 1);
        std::vector<int> rightArr(right - mid);
        for (size_t i = 0; i < leftArr.size(); i++) {
            leftArr[i] = arr[left + i];
        }
        for (size_t i = 0; i < rightArr.size(); i++) {
            rightArr[i] = arr[mid + 1 + i];
        }
        mergeInsertionSort_v(leftArr, 0, leftArr.size() - 1);
        mergeInsertionSort_v(rightArr, 0, rightArr.size() - 1);
        merge_v(arr, leftArr, rightArr);
    }
}

void merge_dq(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right) {
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while (i < left.size()) {
        arr[k++] = left[i++];
    }
    while (j < right.size()) {
        arr[k++] = right[j++];
    }
}

void insertionSort_dq(std::deque<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void mergeInsertionSort_dq(std::deque<int>& arr, int left, int right) {
    if (right - left <= CHUNK_SIZE) {
        insertionSort_dq(arr, left, right);
    } else {
        int mid = (left + right) / 2;
        std::deque<int> leftArr(mid - left + 1);
        std::deque<int> rightArr(right - mid);
        for (size_t i = 0; i < leftArr.size(); i++) {
            leftArr[i] = arr[left + i];
        }
        for (size_t i = 0; i < rightArr.size(); i++) {
            rightArr[i] = arr[mid + 1 + i];
        }
        mergeInsertionSort_dq(leftArr, 0, leftArr.size() - 1);
        mergeInsertionSort_dq(rightArr, 0, rightArr.size() - 1);
        merge_dq(arr, leftArr, rightArr);
    }
}

int nonPositiveInteger(char *str)
{
    int i = -1;

    while (str[++i]) {
        if (!std::isdigit(str[i]))
            return 1;
    }
    return 0;
}
