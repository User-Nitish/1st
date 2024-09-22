#include <iostream>  
using namespace std;  

class Stack {  
private:  
    int maxSize;  
    int top;  
    int* stackArray;  

public:  
    Stack(int size) {  
        maxSize = size;  
        top = -1;  
        stackArray = new int[maxSize];  
    }  

    ~Stack() {  
        delete[] stackArray;  
    }  

    void push(int value) {  
        if (top == maxSize - 1) {  
            cout << "Stack Overflow" << endl;  
            return;  
        }  
        stackArray[++top] = value;  
    }  

    int pop() {  
        if (top == -1) {  
            cout << "Stack Underflow" << endl;  
            return -1;  
        }  
        return stackArray[top--];  
    }  

    bool isEmpty() {  
        return top == -1;  
    }  
};  

int main() {  
    int n;  
    cout << "Enter the number of elements: ";  
    cin >> n;  

    Stack stack(n);  

    cout << "Enter " << n << " values: ";  
    for (int i = 0; i < n; i++) {  
        int value;  
        cin >> value;  
        stack.push(value);  
    }  

    cout << "Popped values: ";  
    while (!stack.isEmpty()) {  
        cout << stack.pop() << " ";  
    }  
    cout << endl;  

    return 0;  
}
