#include <iostream>
using namespace std;
#include "../include/LinkedList.h"
//selection sort using LL
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void selectionSort(LinkedList *arr,int size){
    for(int count=0;count<size-1;count++){
        int minIndex=count;
        int minVal=arr->GetDataByIndex(minIndex);
    
        for(int i=count+1;i<size;i++){
            if(arr->GetDataByIndex(i)<minVal){
                minIndex=i;
                minVal=arr->GetDataByIndex(i);
            }
        }
        int first=arr->GetDataByIndex(count);
        arr->SetDataByIndex(count, arr->GetDataByIndex(minIndex));
        arr->SetDataByIndex(minIndex, first);
    }

}



void bubbleSort(LinkedList *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr->GetDataByIndex(j)>arr->GetDataByIndex(j+1)){
                int first=arr->GetDataByIndex(j);
                arr->SetDataByIndex(j, arr->GetDataByIndex(j+1));
                arr->SetDataByIndex(j+1, first);
            }
        }
    }
}

int main(){
    LinkedList list;
    int arr[7]={2,0,9,6,8,4,3};
    for(int i=0;i<7;i++)
        list.push_back(arr[i]);
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    bubbleSort(&list, list.GetCount());
    for(int i=0;i<list.GetCount();i++){
        cout<<list.GetDataByIndex(i)<<endl;
    }

    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    selectionSort(&list, list.GetCount());
    for(int i=0;i<list.GetCount();i++){
        cout<<list.GetDataByIndex(i)<<endl;
    }
    return 0;
}