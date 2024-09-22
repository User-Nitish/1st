#include <iostream>  
#include <vector>  

using namespace std;  

void checkTargetExists(const vector<int>& arr, int target) {  
    bool found = false;  
    for (int num : arr) {  
        if (num == target) {  
            found = true;  
            break;  
        }  
    }  
    cout << (found ? "YES" : "NO") << endl;  
}  

int findTargetIndex(const vector<int>& arr, int target) {  
    for (int i = 0; i < arr.size(); i++) {  
        if (arr[i] == target) {  
            return i + 1; // Return 1-based index  
        }  
    }  
    return -1; // Target not found  
}  

int main() {  
    vector<int> arr = {2, 4, 6, 7, 8};  
    int target = 6;  

    checkTargetExists(arr, target); // Output for Question 1  

    int index = findTargetIndex(arr, target); // Output for Question 2  
    cout << index << endl; // Print index  

    return 0;  
}
