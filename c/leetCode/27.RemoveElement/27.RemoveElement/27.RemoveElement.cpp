#include <iostream>

using namespace std;

int removeElement(int nums[], int length, int val) {
    int k = 0; 

    for (int i = 0; i < length; ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i]; 
            k++; 
        }
    }

    return k; 
}

void printArray(int nums[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = { 3, 2, 2, 3 };
    int val = 3;
    int length = sizeof(nums) / sizeof(nums[0]);

    int k = removeElement(nums, length, val);

    printArray(nums, k); 
    cout << "New length: " << k << endl;

    return 0;
}
