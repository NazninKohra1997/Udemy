#include<iostream>
using namespace std;

void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<endl<<y;
}

int main(){
    int a,b,c;
    cin>>a>>b;
    swap(a,b);


    return 0;
}
