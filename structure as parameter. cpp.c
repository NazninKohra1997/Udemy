#include<iostream>
using namespace std;

void fun(struct rect r){
    int length,breath;
    int area=r.length*r.breadth;
    cout<<area;
}

int main(){
     struct rect={10,5};
     fun(struct rect r);
     return 0;
}
