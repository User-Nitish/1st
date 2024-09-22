#include <iostream>  

using namespace std;  

int main() {  
    int* singleVariable = new int;  
    *singleVariable = 42;  

    cout << "Value of the dynamically allocated single variable: " << *singleVariable << endl;  

    int size;  
    cout << "Enter the size of the dynamic array: ";  
    cin >> size;  

    int* dynamicArray = new int[size];  

    for (int i = 0; i < size; i++) {  
        dynamicArray[i] = i * 10;  
    }  

    cout << "Contents of the dynamic array: ";  
    for (int i = 0; i < size; i++) {  
        cout << dynamicArray[i] << " ";  
    }  
    cout << endl;  

    delete singleVariable;  
    delete[] dynamicArray;  

    return 0;  
}
