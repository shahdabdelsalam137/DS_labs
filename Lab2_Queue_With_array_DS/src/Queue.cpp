#include "../include/Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(int capacity){
    this->capacity = capacity;
    this->items = new int[this->capacity];
    this->activeCount = 0;
    this->rear = -1;
    this->front = 0;
}

Queue::~Queue(){
    delete []items;
}

void Queue::Enqueue(int data){
    if(isFull()){
        cout << "The Queue is Full" << endl;
        return;
    }

    rear = (rear + 1) % capacity;
    items[rear] = data;
    activeCount++;
}

void Queue::Dequeue(){
    if(isEmpty()){
        cout << "The queue is Empty" << endl;
        return;
    }

    if(activeCount == 1){
        front = 0;
        rear = -1;
        activeCount = 0;
    }else{
        front = (front + 1) % capacity;
        activeCount--;
    }
}

int Queue::Peek(){
    if(isEmpty()){
        cout << "The queue is Empty" << endl;
        return -1;
    }

    return items[front];
}

bool Queue::isEmpty(){
    return activeCount == 0;
}

bool Queue::isFull(){
    return activeCount == capacity;
}
