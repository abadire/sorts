//Insertion sort. Time complexity - O(n^2). 10.09.19
#include <iostream>
#include <vector>

int main() {
    int len;
    do {
        std::cout << "Enter array length: ";
        std::cin >> len;
        std::cin.ignore();
    } while (len < 0);
    std::vector<int> arr;

    for (unsigned int i = 0; i < len; ++i) {
        arr.emplace_back(rand()%100);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (unsigned int i = 1; i < arr.size(); ++i) {
        for (auto iter = arr.begin(); iter < arr.begin()+i; ++iter) {
            if (arr[i] < *iter) {
                arr.insert(iter, arr[i]);
                arr.erase(arr.begin()+i+1);
                break;
            }
        }
    }

    for (unsigned int i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
