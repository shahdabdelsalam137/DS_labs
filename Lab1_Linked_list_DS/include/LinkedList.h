#include <iostream>
using namespace std;
// here we will deal with single linked List 
struct Node {
   int data;
   Node *next;

};
class LinkedList{
private:
   Node *head;
public:
    LinkedList();
    void push_back(int data);
    void InsertAfter(int data, int afterData); 
    void InsertBefore(int data, int beforeData); 
    int GetCount();
    int GetDataByIndex(int index);

 
};