#include<iostream>
using namespace std;

struct Rect{
    int length;
    int breadth;
};

int main(){
   struct Rect *p,r;
   p=&r;
   (*p).length=10;
   (*p).breadth=5;
   cout<< (*p).length<<endl<<(*p).breadth;
   return 0;
}
