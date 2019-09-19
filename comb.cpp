//Comb sort. Time complexity - O(n^2). 12.09.19
#include <iostream>
#include <vector>

int main()
{
    int len;
    do {
        std::cout << "Enter array length: ";
        std::cin >> len;
        std::cin.ignore();
    } while(len < 0);

    int gap = len;
    int temp; //for swapping

    std::vector<int> arr;
    arr.reserve(len);
    for (int i = 0; i < len; ++i) {
        arr.emplace_back(std::rand()%100);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    auto first = arr.begin();
    auto second = arr.end()-1;

    while (gap > 0) {
        while (second < arr.end()) {
            if (*first > *second) {
                temp = *second;
                *second = *first;
                *first = temp;
            }
            ++first;
            ++second;
        }
        gap /= 1.3; //shrink factor = 1.3
        first = arr.begin();
        second = first + gap;
    }

    return 0;
}
