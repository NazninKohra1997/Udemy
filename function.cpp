#include<iostream>
using namespace std;

int add(int a,int b){
    int c=a+b;
    return c;
}

int main(){
    int x,y,z;
    cin>>x>>y;
    z=add(x,y);
    cout<<z;
    return 0;
}
