#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(vector<int>& nums) {
    int result = 0;
    for(int i = 0; i < nums.size(); ++i) {
        result ^= nums[i];  // XOR all elements, duplicates cancel out
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; ++i)
        cin >> nums[i];
    
    cout << "The single element is: " << findSingleElement(nums) << endl;
    
    return 0;
}
