#include <iostream>  
#include <string>  

using namespace std;  

class Car {  
private:  
    string brandName;  
    string model;  
    string engine;  
    int numberOfSeats;  

public:  
    Car(string bName, string m, string eng, int seats)   
        : brandName(bName), model(m), engine(eng), numberOfSeats(seats) {}  

    void displayInfo() {  
        cout << "Brand Name: " << brandName << endl;  
        cout << "Model: " << model << endl;  
        cout << "Engine: " << engine << endl;  
        cout << "Number of Seats: " << numberOfSeats << endl;  
    }  
};  

int main() {  
    Car myCar("Toyota", "Camry", "2.5L I4", 5);  
    
    myCar.displayInfo();  

    return 0;  
}
