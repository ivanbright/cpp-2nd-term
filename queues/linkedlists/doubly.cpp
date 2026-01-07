//
// Created by Bright on 06/01/2026.
//
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Node {
public:
    T data;
    Node<T>* prev;
    Node<T> *next;
    explicit Node(T data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};
template <class T>
Node<T> insertAtBeginning(Node<T> * head,T data) {
    Node<T> *newNode = new Node<T>(data);
    if (head == nullptr) {
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node<T> *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;

    return newNode;

}
template <class T>
void display(Node<T>* head) {
    if (head == nullptr) return;

    if (head->next == head) {
        cout << head->data << endl;
        return;
    }
    Node<T> *temp = head;
    while (temp->next != head) {

        cout << temp->data << "->";
        temp = temp->next;
        if (temp->next == head) {
            cout << temp->data << endl;
        }
    }
}
template <class T>
void displayFromTheTail (Node<T> * tail) {
    if (tail == nullptr) return;
    Node<T> *temp = tail;
    while (temp->next != tail) {
        cout << temp->data << "->";
        temp = temp->next;
        if (temp->next == tail) {
            cout << temp->data << endl;
        }
    }
}
int main () {
    Node<int> * head = new Node<int>(10);
    Node<int> * node2 = new Node<int>(20);
    Node<int> * node3 = new Node<int>(30);
    Node<int> * node4 = new Node<int>(40);
    Node<int> * node5 = new Node<int>(50);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = head;
    display(head);
    displayFromTheTail(node5);

    delete head;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    return 0;

}