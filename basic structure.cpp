#include<iostream>
using namespace std;

struct Rectangle{
  int length;
  int breadth;
};

int main(){
    struct Rectangle r;

    r.length=5;
    r.breadth=2;
    cout<<r.length<<endl<<r.breadth<<endl;
    return 0;
}
