#include <iostream>  
using namespace std;  

struct Node {  
    int data;  
    Node* next;  
};  

class LinkedList {  
public:  
    Node* head;  

    LinkedList() {  
        head = nullptr;  
    }  

    void insert(int x) {  
        Node* newNode = new Node();  
        newNode->data = x;  
        newNode->next = head;  
        head = newNode;  
    }  

    bool hasCycle() {  
        Node* slow = head;  
        Node* fast = head;  

        while (fast != nullptr && fast->next != nullptr) {  
            slow = slow->next;  
            fast = fast->next->next;  
            if (slow == fast) {  
                return true;  
            }  
        }  
        return false;  
    }  
};  

int main() {  
    LinkedList ll;  
    ll.insert(0);  
    ll.insert(2);  
    ll.insert(3);  
    
    ll.head->next->next->next = ll.head->next; // Create a cycle  

    if (ll.hasCycle()) {  
        cout << "true" << endl; // Output: true  
    } else {  
        cout << "false" << endl;  
    }  

    return 0;  
}
