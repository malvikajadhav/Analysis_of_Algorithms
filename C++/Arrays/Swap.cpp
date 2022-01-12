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

     a = a^b;
     b = a^b;
     a = a^b;
  
     swap(a,b);
  
     cout<<"After swapping:";
     cout<<a<<" "<<b;
     return 0;
 }
