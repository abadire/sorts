//Shell sort. Time compllexity - O(n^4/3). 13.09.19
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    int len;
    do {
        std::cout << "Enter array length: ";
        std::cin >> len;
        std::cin.ignore();
    } while (len < 0);
    int gap = len/2; //gap between compared elements

    std::vector<int> arr;
    arr.reserve(len);
    for (unsigned int i = 0; i < len; ++i) {
        arr.emplace_back(rand()%100);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    auto first = arr.begin();
    auto second = arr.begin()+gap;
    auto temp = arr.begin();

    while (gap > 0) {
        for (int i = gap; i < len; ++i) {
            second = arr.begin() + i;
            for (first = second - gap; (first-gap >= arr.begin()) && *(first-gap) > *second; first -= gap) {
                std::iter_swap(first, (first-gap));
            }
            if (*first > *second) {
                std::iter_swap(first, second);
            }
        }
        gap /= 2;
    }

    for (unsigned int i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
