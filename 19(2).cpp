#include <iostream>  
#include <fstream>  
#include <string>  

using namespace std;  

int main() {  
    ifstream inFile("sample.txt");  
    
    if (!inFile) {  
        cerr << "Error opening file!\n";  
        return 1;  
    }  

    string line;  
    cout << "Contents of sample.txt:\n";  
    while (getline(inFile, line)) {  
        cout << line << "\n";  
    }  
    inFile.close();  

    return 0;  
}
