#include<iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"Enter array size:";
     cin>>n;
     int a[n];
     for(int i =0; i<n;i++)
     {
         cin>>a[i];
     }


     int start = 0;
     int endel = n-1;

     while(start<endel)
     {
         swap(a[start],a[endel]);
         start++;
         endel--;
     }

     for(int i =0; i<n;i++)
     {
         cout<<a[i];
     }
     return 0;
 }
