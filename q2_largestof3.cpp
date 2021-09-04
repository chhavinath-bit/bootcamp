// largest among 3
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
      cin>>a>>b>>c;
      if(a>=b){
          if(a>=c)
                 cout<<"the largest is number a = "<<a;
          else
               cout<<"the largest is number c = "<<c;   
      }
      else{
          if(b>=c)
              cout<<"the largest is number b = "<<b;
           else
               cout<<"the largest is number c = "<<c;   
      }

    return 0;
}
