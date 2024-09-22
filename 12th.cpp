#include <iostream>  

using namespace std;  

struct Node {  
    int data;  
    Node* next;  
    
    Node(int value) : data(value), next(nullptr) {}  
};  

void printLinkedList(Node* head) {  
    Node* current = head;  
    while (current != nullptr) {  
        cout << current->data << " ";  
        current = current->next;  
    }  
    cout << endl;  
}  

void insertAtEnd(Node*& head, int data) {  
    Node* newNode = new Node(data);  
    if (head == nullptr) {  
        head = newNode;  
        return;  
    }  
    
    Node* current = head;  
    while (current->next != nullptr) {  
        current = current->next;  
    }  
    current->next = newNode;  
}  

int main() {  
    Node* head = new Node(10);  
    head->next = new Node(20);  
    head->next->next = new Node(30);  
    
    cout << "Original linked list: ";  
    printLinkedList(head);  
    
    insertAtEnd(head, 40);  
    
    cout << "Linked list after insertion: ";  
    printLinkedList(head);  
    
    return 0;  
}
