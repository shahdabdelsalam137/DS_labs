#include <iostream>
using namespace std;
#include "../include/LinkedList.h"
int main(){
    LinkedList  *l=new LinkedList();
    l->push_back(5);
    l->push_back(5);
    cout<<l->GetCount()<<endl;

    cout<<l->GetDataByIndex(1)<<endl;
    l->InsertAfter(2,5);
    cout<<l->GetDataByIndex(1)<<endl;
    cout<<l->GetDataByIndex(2)<<endl;
    l->InsertBefore(5,2);
    cout<<l->GetDataByIndex(2)<<endl;
    return 0;
}