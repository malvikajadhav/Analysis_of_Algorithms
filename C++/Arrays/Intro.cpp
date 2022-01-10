#include<iostream>
 using namespace std;

 int main()
 {
     int a[10],p;
     a[0]=11;
     a[7]= 3;
     cout<<" "<<a[7]<<" "<<a[0]<<endl;

     int b[10]={1,2,3,4};
     cout<<b[0]<<b[1]<<b[2]<<b[3]<<endl;

     for(int i=0 ; i<10;i++)
     {
        b[i]=i*i;
        cout<<b[i]<<"\t";
     }
    cout<<"\n____________________________________________________________________"<<endl;
     cout<<sizeof(a)<<" "<<sizeof(p);
     return 0;
 }
