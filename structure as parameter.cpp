#include<iostream>
using namespace std;

int area(struct rect r1){
    return r1.length*r1.breadth;

}

int main(){
     struct rect r={10,5};
     cout<<area(r);
     return 0;
}
