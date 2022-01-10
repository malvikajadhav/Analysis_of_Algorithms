#include<iostream>
 using namespace std;
 int main()
 {
     int n,sum;
     cout<<"Enter number of elements:";
     cin>>n;

     int a[n];

     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }

     for(int i=0;i<n;i++)
     {
         sum += a[i];
     }

      cout<<sum<<" is the sum of all elements";

     return 0;
 }
