//
// Created by Bright on 06/01/2026.
//
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Node {
public:
    T data;
    Node<T> *next;
    explicit Node(T data) {
        this->data = data;
        next = nullptr;
    }
};
template <class T>

Node<T> *insertAtBeginning(Node<T> * head,T data) {
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
Node<T>* insertAtTheEnd(Node<T>* head, T data) {
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
template <class T>
Node<T>* mid_node(Node<T>* head) {
    if (head == nullptr || head->next == head) {
        return head;
    }

    Node<T> *temp = head;
    Node<T>* fast = head;
    Node<T>* slow = head;

    while (fast->next != head && fast->next->next != head) {
        fast = fast->next;
        if (fast->next != head) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
template <class T>
void insertAtTheMiddle(Node<T>* head, T data) {
    if (head->next == head) {
        return;
    }
    Node<T> * mid = mid_node(head);
    mid->next = head;
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

    Node<int>* head2 = insertAtBeginning(head, 20);
   display(head2);
    displayFromTheTail(node5);


   Node<int>* newEnd =  insertAtTheEnd(head2, 100);

    display(head2);
    displayFromTheTail(newEnd);

    insertAtTheMiddle(head2, 24);
    display(head2);
    displayFromTheTail(newEnd);

    delete head;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete head2;
    delete newEnd;
    return 0;

}