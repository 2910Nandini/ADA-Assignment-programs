//bubble sort
using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>
int main ()                             //assignment 7
{
   int i, j,n,temp,pass=0;
   int a[50];
   cout<<"Enter size of array\n";
   cin>>n;
   cout<<"Enter array elements\n";
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout <<"Input list ...\n";
   for(i = 0; i<n; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<n; i++) {
   for(j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<n; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
