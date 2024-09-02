#include <iostream>  
using namespace std;  

int main() {  
    int size;  
    cout << "Enter the size of the array: ";  
    cin >> size;  

    int arr[size];  
    cout << "Enter the array elements: ";  
    for (int i = 0; i < size; i++) {  
        cin >> arr[i];  
    }  

    int countOdd = 0, countEven = 0;  
    for (int i = 0; i < size; i++) {  
        if (arr[i] % 2 == 0) {  
            countEven++;  
        } else {  
            countOdd++;  
        }  
    }  

    cout << "Number of odd numbers: " << countOdd << endl;  
    cout << "Number of even numbers: " << countEven << endl;  

    return 0;  
}
