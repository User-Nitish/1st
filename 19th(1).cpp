#include <iostream>  
#include <fstream>  
#include <string>  

using namespace std;  

int main() {  
    string firstName, lastName, age;  

    cout << "Enter your first name: ";  
    getline(cin, firstName);  
    cout << "Enter your last name: ";  
    getline(cin, lastName);  
    cout << "Enter your age: ";  
    getline(cin, age);  

    // Write details to a file  
    ofstream outFile("details.txt");  
    outFile << "First Name: " << firstName << "\n";  
    outFile << "Last Name: " << lastName << "\n";  
    outFile << "Age: " << age << "\n";  
    outFile.close();  

    // Read and display the file contents  
    ifstream inFile("details.txt");  
    string line;  
    cout << "\nDetails written to the file:\n";  
    while (getline(inFile, line)) {  
        cout << line << "\n";  
    }  
    inFile.close();  

    return 0;  
}
