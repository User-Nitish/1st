#include <iostream>  
using namespace std;  

void bubbleSort(int arr[], int n) {  
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {  
                
                int temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }  
        }  
    }  
}  

int main() {  
    int N;  
    cout << "Enter the size of the array: ";  
    cin >> N;  

    int arr[N];  
    cout << "Enter the elements of the array: ";  
    for (int i = 0; i < N; i++) {  
        cin >> arr[i];  
    }  

    bubbleSort(arr, N);  

    cout << "Sorted array: ";  
    for (int i = 0; i < N; i++) {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  

    return 0;  
}
