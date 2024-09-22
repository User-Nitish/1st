#include <iostream>  
#include <string>  

using namespace std;  

class Student {  
private:  
    string name;  
    int age;  
    int rollNumber;  

public:  
    Student(string n, int a, int r) : name(n), age(a), rollNumber(r) {}  

    void displayDetails() {  
        cout << "Student Details:" << endl;  
        cout << "Name: " << this->name << endl;  
        cout << "Age: " << this->age << endl;  
        cout << "Roll Number: " << this->rollNumber << endl;  
    }  
};  

int main() {  
    Student student("Alice", 20, 101);  
    student.displayDetails();  

    return 0;  
}
