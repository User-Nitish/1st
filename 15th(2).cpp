#include <iostream>  

using namespace std;  

struct Node {  
    int data;  
    Node* next;  

    Node(int val) : data(val), next(nullptr) {}  
};  

class LinkedList {  
private:  
    Node* head;  

public:  
    LinkedList() : head(nullptr) {}  

    void insert(int value) {  
        Node* newNode = new Node(value);  
        if (!head) {  
            head = newNode;  
        } else {  
            Node* temp = head;  
            while (temp->next) {  
                temp = temp->next;  
            }  
            temp->next = newNode;  
        }  
    }  

    void deleteValue(int value) {  
        if (!head) return;  

        if (head->data == value) {  
            Node* temp = head;  
            head = head->next;  
            delete temp;  
            return;  
        }  

        Node* current = head;  
        Node* previous = nullptr;  

        while (current && current->data != value) {  
            previous = current;  
            current = current->next;  
        }  

        if (current) {  
            previous->next = current->next;  
            delete current;  
        }  
    }  

    void display() {  
        Node* temp = head;  
        while (temp) {  
            cout << temp->data;  
            if (temp->next) {  
                cout << "->";  
            }  
            temp = temp->next;  
        }  
        cout << endl;  
    }  
};  

int main() {  
    LinkedList list;  

    cout << "Enter the elements of the linked list (enter -1 to stop):" << endl;  
    int value;  
    while (true) {  
        cin >> value;  
        if (value == -1) break;  
        list.insert(value);  
    }  

    cout << "Enter the value to delete: ";  
    cin >> value;  

    list.deleteValue(value);  

    cout << "Updated linked list: ";  
    list.display();  

    return 0;  
}
