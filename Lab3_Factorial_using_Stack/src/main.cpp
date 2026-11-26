#include "../include/Stack.h"
#include <iostream>
using namespace std;
int factorial(int num){
    int res=1;
    Stack N(100);
for(int i=num;i>1;i--){
    N.push(i);
}
int Val=0;
while(N.pop(&Val)){
res=res*Val;

}


    return res;
}
int main() {
int fac=factorial(7);
cout<<fac<<endl;
    return 0;
}