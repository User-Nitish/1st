#include <iostream>  
using namespace std;  

class Complex {  
public:  
    float real;  
    float imaginary;  

    Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}  

    Complex operator+(const Complex& other) {  
        return Complex(real + other.real, imaginary + other.imaginary);  
    }
    Complex operator-(const Complex& other) {  
        return Complex(real - other.real, imaginary - other.imaginary);  
    }  


    void print() const {  
        cout << real << " + " << imaginary << "i" << endl;  
    }  
};  

int main() {  

    Complex num1(3, 4); 
    Complex num2(1, 2); 

    cout << "Complex Number 1: ";  
    num1.print();  

    cout << "Complex Number 2: ";  
    num2.print();  


    cout << "Sum: ";  
    (num1 + num2).print();  

    cout << "Difference: ";  
    (num1 - num2).print();  

    return 0;  
}
