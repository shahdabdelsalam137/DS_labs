#include "../include/LinkedList.h"
//here we initialize the linkedlist 
LinkedList::LinkedList(){
head=nullptr;
}


void LinkedList::InsertAfter(int data, int afterData) {
    Node *current = head;

    if (current == nullptr) {
        cout << "The list is empty" << endl;
        return;
    }

    while (current != nullptr && current->data != afterData) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "The list does not contain it" << endl;
        return;
    }

    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = current->next;
    current->next = newNode;
}

void LinkedList::push_back(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void LinkedList::InsertBefore(int data, int beforeData){
    Node *current = head;

    if (current == nullptr) {
        cout << "The list is empty" << endl;
        return;
    }

    if (head->data == beforeData) {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *previous = nullptr;
    while (current != nullptr && current->data != beforeData) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "The list does not contain it" << endl;
        return;
    }

    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = current;
    previous->next = newNode;
}

int LinkedList::GetCount(){
int count=0;
Node * current=head;
while(current!=nullptr){
    count++;
    current=current->next;
}

return count;

}

int LinkedList::GetDataByIndex(int index){
int count=0;
Node * current=head;
while(count!=index){
current=current->next;
count++;
}
return current->data;

};