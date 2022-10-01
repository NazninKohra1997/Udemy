#include<iostream>
using namespace std;

int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<*x<<endl<<*y;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);


    return 0;
}
