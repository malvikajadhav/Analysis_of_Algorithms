#include<iostream>
#include<cstring>
using namespace std;
 int main()
 {
     char str[100], str2[100];
     cin>>str>>str2;
     int len = strlen(str);
     cout<<len;
     if(strcmp(str,str2)== 0)
     {
         cout<<"Equal";
     }
     else{
        cout<<"Not Equal";
     }
     return 0;
 }
