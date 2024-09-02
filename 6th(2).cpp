#include <iostream>  
using namespace std;  

int main() {  
    int size;  
    cout << "Enter the size of the array: ";  
    cin >> size;  

    int arr[size];  
    cout << "Enter the array: ";  
    for (int i = 0; i < size; i++) {  
        cin >> arr[i];  
    }  

    int sumOdd = 0, sumEven = 0;  
    for (int i = 0; i < size; i++) {  
        if (arr[i] % 2 == 0) {  
            sumEven += arr[i];  
        } else {  
            sumOdd += arr[i];  
        }  
    }  

    cout << "Sum of odd numbers: " << sumOdd << endl;  
    cout << "Sum of even numbers: " << sumEven << endl;  

    return 0;  
}
