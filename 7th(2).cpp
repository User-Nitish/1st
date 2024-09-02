#include <iostream>  
using namespace std;  

void insertionSort(int arr[], int n) {  
    for (int i = 1; i < n; i++) {  
        int key = arr[i];  
        int j = i - 1;  

        while (j >= 0 && arr[j] > key) {  
            arr[j + 1] = arr[j];  
            j--;  
        }  
        arr[j + 1] = key;  
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

    insertionSort(arr, N);  

    cout << "Sorted array: ";  
    for (int i = 0; i < N; i++) {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  

    return 0;  
}
