#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &r=a;
    cout<<a<<endl;
    a++;
    cout<<a<<endl<<r;

    return 0;
}
