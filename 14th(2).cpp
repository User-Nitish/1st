#include <iostream>  

using namespace std;  

class Rectangle {  
private:  
    double length;  
    double width;  

public:  
    Rectangle(double l, double w) : length(l), width(w) {}  

    Rectangle(const Rectangle& rect) {  // Copy constructor  
        length = rect.length;  
        width = rect.width;  
    }  

    double area() const {  
        return length * width;  
    }  

    void display() const {  
        cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;  
    }  
};  

int main() {  
    Rectangle rect1(10.0, 5.0);  
    cout << "Rectangle 1: ";  
    rect1.display();  

    Rectangle rect2 = rect1;  // Calls the copy constructor  
    cout << "Rectangle 2 (copy of Rectangle 1): ";  
    rect2.display();  

    return 0;  
}
