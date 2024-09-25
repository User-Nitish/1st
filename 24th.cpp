#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr) {
    int max_count = 0, current_count = 0;
    
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] == 1) {
            current_count++;
            max_count = max(max_count, current_count);
        } else {
            current_count = 0;
        }
    }
    
    return max_count;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the binary array elements (0/1): ";
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    
    cout << "Maximum number of consecutive ones: " << findMaxConsecutiveOnes(arr) << endl;
    
    return 0;
}
