//leap year
#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    if((year%4==0 && year%100 != 0)||(year%400==0))
       cout<<"given year is a leap year";
       else
         cout<<"given year is a not leap year";
    return 0;
}
