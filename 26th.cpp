#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
private:
    vector<int> arr;

public:
    void enqueue(int value) {
        arr.push_back(value);
        int i = arr.size() - 1;
        while (i > 0 && arr[i] > arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
            i--;
        }
    }

    void dequeue() {
        if (arr.empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Removed element: " << arr.front() << endl;
        arr.erase(arr.begin());
    }

    int peek() {
        if (arr.empty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr.front();
    }

    bool isEmpty() {
        return arr.empty();
    }

    void display() {
        if (arr.empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    
    pq.enqueue(30);
    pq.enqueue(50);
    pq.enqueue(10);
    pq.enqueue(40);
    pq.enqueue(20);

    cout << "Priority Queue elements: ";
    pq.display();

    cout << "Highest priority element: " << pq.peek() << endl;

    pq.dequeue();
    
    cout << "Priority Queue after dequeue: ";
    pq.display();

    return 0;
}
