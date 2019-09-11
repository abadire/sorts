//Selection sort. Time comlexity - O(n^2). 11.09.19
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
            int len;
    do {
        cout << "Enter array length: ";
        cin >> len;
        cin.ignore();
    } while (len < 0);


    vector<int> arr;
    for (unsigned int i = 0; i < len; ++i) {
        arr.emplace_back(rand()%100);
        cout << arr[i] << " ";
    }
    cout << endl;

    for (auto i = arr.begin(); i < arr.end()-1; ++i) {
        auto min = i;
        vector<int>::iterator j;
        for (j = i+1; j < arr.end(); ++j) {
            if (*j < *min) {
                min = j;
            }
        }
        iter_swap(i, min); //uses <algorithm>
    }

    for (auto i:arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
