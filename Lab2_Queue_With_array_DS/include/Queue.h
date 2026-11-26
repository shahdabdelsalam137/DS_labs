#ifndef QUEUE_H
#define QUEUE_H
class Queue{

public:
  Queue(int capacity);
  ~Queue();
  void Enqueue(int data);
  void Dequeue();
  int Peek();
  bool isEmpty();
  bool isFull();


private:
    int *items;
    int front;  //the first element to be removed 
    int rear; //the most recently added elememt
    int activeCount; //current size 
    int capacity ;  // the max capacity of the array 
    

 

};


#endif