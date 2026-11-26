#include <iostream>
using namespace std;
#include "../include/Queue.h"
int main(){
    Queue Q(10);
    Q.Enqueue(5);
    Q.Enqueue(6);
    Q.Enqueue(7);
    Q.Enqueue(8);
    Q.Enqueue(9);
    Q.Enqueue(10);
    Q.Dequeue();
    Q.Dequeue();
    cout<<Q.Peek()<<endl;
    cout<<Q.isFull()<<endl;
    cout<<Q.isEmpty()<<endl;
    return 0;
}