#include<iostream>
using namespace std;

void fun(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int A[5]={1,2,3,4,5};
    int c;
    c=fun(A,5);
    cout<<c<<endl;
    return 0;
}
