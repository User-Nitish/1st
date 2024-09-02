#include <iostream>  
#include <iomanip> 
using namespace std;  

int main() {  
    int a, b;  
    
    cout << "Enter first integer: ";  
    cin >> a;  
    cout << "Enter second integer: ";  
    cin >> b;  

 
    cout << "Addition: " << (a + b) << endl;  
    cout << "Subtraction: " << (a - b) << endl;  
    cout << "Multiplication: " << (a * b) << endl;  


    if (b != 0) {  
        cout << "Division: " << fixed << setprecision(5) << static_cast<double>(a) / b << endl;  
    } else {  
        cout << "Division: Error! Division by zero." << endl;  
    }  


    if (b != 0) {  
        cout << "Modulus: " << (a % b) << endl;  
    } else {  
        cout << "Modulus: Error! Division by zero." << endl;  
    }  

    return 0;  
}
