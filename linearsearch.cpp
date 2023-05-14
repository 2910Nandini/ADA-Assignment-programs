//linear search
using namespace std;
#include<iostream>
#include<conio.h>
int main()                           //assignment 12
{
    int arr[50],i,n,x,flag=0,pos;
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the array elements = \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements = \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the element to be searched = \n ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
        cout<<x<<"\tfound at\t"<<i+1<<" position";
        break;
        }
    }
    return 0;
}
