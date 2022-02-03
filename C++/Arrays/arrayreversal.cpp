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

 void revarr(char input[])
 {
     int s = 0;
     int e = length(input) - 1;
     while(s<e)
     {
       swap(input[s],input[e]);
       s++;
       e--;
     }
 }



 int main()
 {
     char input[100];
     cin.getline(input,10);
     cout<<input;
     revarr(input);
     cout<<input;
     return 0;
 }
