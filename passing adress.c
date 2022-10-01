#include<iostream>
using namespace std;

int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a,b,c;
    cin>>a>>b;
    c=swap(&a,&b);
    cout<<c;

    return 0;
}
