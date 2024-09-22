#include <iostream>  
using namespace std;  

int findMax(const int arr[], int size) {  
    if (size <= 0) {  
        throw invalid_argument("Array size must be greater than 0");  
    }  
    
    int maxVal = arr[0];  
    for (int i = 1; i < size; ++i) {  
        if (arr[i] > maxVal) {  
            maxVal = arr[i];  
        }  
    }  
    return maxVal;  
}  

int main() {  
    const int arr1[] = {1, 5, 3, 9, 2};  
    const int arr2[] = {-10, -5, 0, 5, 10};  
    const int arr3[] = {7, 7, 7, 7};  
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);  
    int size2 = sizeof(arr2) / sizeof(arr2[0]);  
    int size3 = sizeof(arr3) / sizeof(arr3[0]);  
    
    cout << "Maximum in arr1: " << findMax(arr1, size1) << endl;   
    cout << "Maximum in arr2: " << findMax(arr2, size2) << endl;   
    cout << "Maximum in arr3: " << findMax(arr3, size3) << endl;   

    return 0;  
}
