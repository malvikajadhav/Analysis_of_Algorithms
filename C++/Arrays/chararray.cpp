#include<iostream>
using namespace std;

int length(char input[])
{
   int cont = 0;
   for(int i=0;input[i]!='\0';i++)
   {
       cont++;
   }
   return cont;
}
 int main()
 {
     char p[10];
     cin>>p;
     cout<<p;
     p[5]='\0';
     p[7]='o';
     cout<<p;
     cout<<length(p);
     return 0;
 }
