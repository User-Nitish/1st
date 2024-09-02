#include <iostream>  
#include <string>  
using namespace std;  

void reverseString(string& str) {  
    int n = str.length();  
    for (int i = 0; i < n / 2; ++i) {  
        swap(str[i], str[n - i - 1]);  
    }  
    cout << "Reversed string: " << str << endl;  
}  

int main() {  
    string input;  
    cout << "Enter a string: ";  
    cin >> input;  

    reverseString(input);  
    
    return 0;  
}
