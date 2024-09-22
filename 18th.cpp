#include <iostream>  
#include <string>  
#include <tuple>  

using namespace std;  

class Person {  
private:  
    string firstName;  
    string lastName;  
    int age;  

public:  
    Person(const string& fName, const string& lName, int a)   
        : firstName(fName), lastName(lName), age(a) {}  

    string getFullName() const {  
        return firstName + " " + lastName;  
    }  

    tuple<string, string, int> getDetails() const {  
        return make_tuple(firstName, lastName, age);  
    }  
};  

int main() {  
    Person person("John", "Doe", 30);  
    
    cout << "Full Name: " << person.getFullName() << endl;  

    auto [first, last, age] = person.getDetails();  // Structured bindings  
    cout << "First Name: " << first << endl;  
    cout << "Last Name: " << last << endl;  
    cout << "Age: " << age << endl;  

    return 0;  
}
