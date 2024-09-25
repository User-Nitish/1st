#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void twoSum_nlogn(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    
    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            cout << "YES" << endl;
            return;
        } else if(sum < target) {
            ++left;
        } else {
            --right;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "Enter the target: ";
    cin >> target;

    twoSum_nlogn(arr, target);
    return 0;
}
