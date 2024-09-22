#include <iostream>  
using namespace std;  

struct Node {  
    int data;  
    Node* prev;  
    Node* next;  
};  

class DoublyLinkedList {  
public:  
    Node* head;  

    DoublyLinkedList() {  
        head = nullptr;  
    }  

    void insertAtPosition(int pos, int x) {  
        Node* newNode = new Node();  
        newNode->data = x;  
        newNode->prev = nullptr;  
        newNode->next = nullptr;  

        if (pos == 0) {  
            newNode->next = head;  
            if (head != nullptr) {  
                head->prev = newNode;  
            }  
            head = newNode;  
        } else {  
            Node* temp = head;  
            for (int i = 0; i < pos - 1 && temp != nullptr; i++) {  
                temp = temp->next;  
            }  
            if (temp == nullptr) {  
                return;  
            }  
            newNode->next = temp->next;  
            newNode->prev = temp;  
            if (temp->next != nullptr) {  
                temp->next->prev = newNode;  
            }  
            temp->next = newNode;  
        }  
    }  

    void display() {  
        Node* temp = head;  
        while (temp != nullptr) {  
            cout << temp->data << " ";  
            temp = temp->next;  
        }  
        cout << endl;  
    }  
};  

int main() {  
    DoublyLinkedList dll;  
    dll.insertAtPosition(0, 2);  
    dll.insertAtPosition(1, 4);  
    dll.insertAtPosition(2, 5);  
    dll.insertAtPosition(2, 6);  

    dll.display(); // Output: 2 4 5 6  

    return 0;  
}
