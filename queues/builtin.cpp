//
// Created by Bright on 06/01/2026.
//
#include <iostream>
#include <queue>
using namespace std;

int main () {

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.pop();

    cout <<"empty? = "  << q.empty() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

}