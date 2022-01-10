#include<iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"Enter size of array";
     cin>>n;

     int a[n];
     cout<<"Enters elements";
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int largest = INT_MIN;
     int smallest = INT_MAX;
     for(int j=0; j<n; j++)
     {
         if(largest<a[j])
         {
             largest = a[j];
         }

         if(smallest>a[j])
         {
             smallest = a[j];
         }
     }

     cout<<"Largest element is :"<<largest<<endl;
     cout<<"Smallest element is :"<<smallest<<endl;
     return 0;
 }
