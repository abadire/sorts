//Bubble sort. Time complexity - O(n^2). 10.09.19
#include <iostream>
#include <vector>

int main() {
    int i;
    std::vector<int> arr;
    std::cout << "Enter array length: ";
    std::cin >> i;
    arr.reserve(i);
    for (int j = 0; j < i; ++j) {
        arr.push_back(std::rand()%100);
        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;
    for (unsigned int k = arr.size(); k >0; --k) {
        for (unsigned int j = 0; j < k-1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int j = 0; j < i; ++j) {
        std::cout << arr[j] << " ";
    }
    return 0;

}
