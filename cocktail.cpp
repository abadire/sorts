//Cocktail sort (two directional bubble). Time complexity - O(n^2). 11.09.19
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

    std::vector<int> arr;
    arr.reserve(len);

    for (int i = 0; i < len; ++i) {
        arr.emplace_back(std::rand()%100);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < len/2; ++i) {
        for (int j = i; j < len-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        for (int j = len - i - 2; j > i; --j) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    for (int i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
