#include <iostream>  
#include <string>  

using namespace std;  

int stringLength(const string &str) {  
    return str.length();  
}  

int countCharacter(const string &str, char ch) {  
    int count = 0;  
    for (char c : str) {  
        if (c == ch) {  
            count++;  
        }  
    }  
    return count;  
}  

string concatenateStrings(const string &str1, const string &str2) {  
    return str1 + str2;  
}  

int main() {  
    string str1 = "Hello, World!";  
    cout << stringLength(str1) << endl;  

    string str2 = "Hello, World!";  
    char character = 'l';  
    cout << countCharacter(str2, character) << endl;  

    string str3 = "Hello, ";  
    string str4 = "World!";  
    cout << concatenateStrings(str3, str4) << endl;  

    return 0;  
}
