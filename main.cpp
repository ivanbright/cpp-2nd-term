#include <bits/stdc++.h>
#define SIZE 5
using namespace std;
template <class T>
class baraqueue {

    int front=-1, rear = 0;
    T* arr = new int[SIZE];

public:

    void enqueue(int val) {

        if(rear == SIZE - 1) {
            cout << "The queue is full" << endl;
        }
        else{
            if(front == - 1) {
                front ++;
            }
            arr[rear++] = val;
        }
    }
    void dequeue() {
        if(front == - 1 || front > rear) {
            cout << "The queue is empty" << endl;
        }
        else {
            front++;
        }
    }
    void display() {

        if(front == - 1 || front > rear) {
            cout << "queue is empty" << endl;
            return;
        }

        for(int i = front; i < rear; i++) {
            cout << arr[i] << " "<< endl;
        }
    }

};

int main () {
    baraqueue<int> quue;
    quue.enqueue(1);
    quue.enqueue(2);
    quue.enqueue(3);
    quue.enqueue(4);
    quue.enqueue(5);
    quue.enqueue(6);
    quue.display();
    return 0;
}

