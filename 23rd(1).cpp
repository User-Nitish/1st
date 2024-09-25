#include <iostream>
#include <vector>
using namespace std;

void twoSum_n2(vector<int>& arr, int target) {
    int n = arr.size();
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(arr[i] + arr[j] == target) {
                cout << "YES" << endl;
                return;
            }
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

    twoSum_n2(arr, target);
    return 0;
}
