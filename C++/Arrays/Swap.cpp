#include<iostream>
using namespace std;
 int main()
 {
     int a,b,temp;
     cout<<"Enter numbers:";
     cin>>a>>b;

     temp = a;
     a = b;
     b = temp;

     cout<<"After swapping:";
     cout<<a<<" "<<b;
     return 0;
 }
