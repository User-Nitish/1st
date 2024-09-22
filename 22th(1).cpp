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
    Stack stack(5);  

    stack.push(1);  
    stack.push(2);  
    stack.push(3);  
    stack.push(4);  
    stack.push(5);  

    return 0;  
}
