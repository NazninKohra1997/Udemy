#include<iostream>
using namespace std;

struct card {
   int face;
   int color;
   int body;
};

int main(){
   struct card c[3]={{1,2,3},{4,5,6},{3,2,6}};
   cout<<c[0].face<<c[0].color<<c[0].body<<endl;
   cout<<c[1].face<<c[1].color<<c[1].body<<endl;
   cout<<c[2].face<<c[2].color<<c[2].body<<endl;

   return 0;
}
