// star pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;                     // you can print for any value of n ; n=5 for example
    for(int i=1; i<=n; i++){
     for(int j=n-i; j>0; j--)
          cout<<" ";
      for(int k=1; k<=i; k++)
            cout<<"* ";     

         cout<<endl;
    }
    return 0;
}

