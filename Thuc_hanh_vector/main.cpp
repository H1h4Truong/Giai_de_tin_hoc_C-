#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector<int>& arr) {
    vector<int> result;
    for (int num : arr) {
        bool found = false;
        for (int r : result) {
            if (r == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(num);
        }
    }
    arr = result;
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    cout << "Mảng sau khi loại bỏ trùng1: ";
    for (int num : arr) {
        cout << num << " ";
    }
    removeDuplicates(arr);

    cout << "Mảng sau khi loại bỏ trùng2: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
