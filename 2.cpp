#include<iostream>
using namespace std;

void fun(int A[],int n){
   int i;
   for(i=0;i<n;i++){
    cout<<A[i]<<endl;
   }
}
   int main(){
      int A[5]={10,20,30,40,50};
      fun(A,5);
      return 0;
   }
