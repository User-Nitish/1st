#include <iostream>  
#include <string>  
#include <cctype>  

using namespace std;  

bool isPalindrome(const string &str) {  
    string cleaned;  
    for (char ch : str) {  
        if (isalnum(ch)) {  
            cleaned += tolower(ch);  
        }  
    }  
    
    int left = 0;  
    int right = cleaned.size() - 1;  
    while (left < right) {  
        if (cleaned[left] != cleaned[right]) {  
            return false;  
        }  
        left++;  
        right--;  
    }  
    return true;  
}  

int main() {  
    string test1 = "A man, a plan, a canal: Panama";  
    string test2 = "race a car";  
    string test3 = "No 'x' in Nixon";  

    cout << "\"" << test1 << "\" is " << (isPalindrome(test1) ? "a palindrome." : "not a palindrome.") << endl;  
    cout << "\"" << test2 << "\" is " << (isPalindrome(test2) ? "a palindrome." : "not a palindrome.") << endl;  
    cout << "\"" << test3 << "\" is " << (isPalindrome(test3) ? "a palindrome." : "not a palindrome.") << endl;  

    return 0;  
}
