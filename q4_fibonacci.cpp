// fibonacci
#include<iostream>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    int a=0,b=1, c=1;    //f(0)=0, f(1)=1, f(2)=1
      for(int i=0; i<n;i++){
          a=b;
          b=c;
          c=a+b;
      }
      cout<<"the "<<n<< " term of fibonacci series is = "<<a;
    return 0;
}