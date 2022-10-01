#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
        void initialize(int l,int b){
            l=length;
            b=breadth;
        }

        int area(){
            return length*breadth;
        }

        void changeLength(int l){
            length=l;

        }
};

int main(){
    Rectangle R;
    R.initialize(10,5);
    R.area();
    R.changeLength(25);

    return 0;
}

