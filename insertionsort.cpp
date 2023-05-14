//insertion sort program
using namespace std;
#include<iostream>
#include<conio.h>
int main()                                     //assignment 10
{
    int arr[50],i,n,j,key;
    cout<<"Enter the size of array = \n";
    cin>>n;
    cout<<"Enter the array elements = \n";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"Original array is \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    for(i=0;i<n;i++)
    {
        key = arr[i];
        j=i-1;
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
        arr[j+1]=key;
    }
    cout<<"Sorted array is\n"<<endl;
    for(j=0;j<n;j++)
    {
     cout<<arr[j]<<"\t";
    }

    return 0;
}
