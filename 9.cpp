#include <iostream>  

using namespace std;  

// Question 1  
void question1() {  
    int num = 42;  
    int* ptr = &num;  
    cout << "Value of num: " << num << endl;  
    cout << "Value of num using pointer: " << *ptr << endl;  
}  

// Question 2  
void question2() {  
    int arr[] = {10, 20, 30, 40, 50};  
    int* ptr = arr;  
    cout << "Elements of the array using pointer arithmetic: ";  
    for (int i = 0; i < 5; i++) {  
        cout << *(ptr + i) << " ";  
    }  
    cout << endl;  
}  

// Question 3  
void question3() {  
    int value = 5;  
    int* ptr = &value;  
    int** ptrToPtr = &ptr;  
    cout << "Value using integer variable: " << value << endl;  
    cout << "Value using pointer: " << *ptr << endl;  
    cout << "Value using pointer to pointer: " << **ptrToPtr << endl;  
}  

int main() {  
    question1();  
    question2();  
    question3();  
    return 0;  
}
