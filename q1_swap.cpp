//swap numbers
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    cout<<"a before swap= "<<a<<endl;
    cout<<"b before swap= "<<b<<endl;
    int  temp=a;
    a=b;
    b=temp;
    cout<<"a after swap= "<<a<<endl;
    cout<<"b after swap= "<<b<<endl;
    return 0;
}