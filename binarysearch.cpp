//binary search
using namespace std;
#include<iostream>
#include<conio.h>
int main()                                  //assignment 13
{
    int arr[50],n,i,x,first,last,m;
    cout<<"Enter the size of array = \n";
    cin>>n;
    cout<<"Enter the array elements = \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements in ascending order = \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the element to be searched = \n";
    cin>>x;
    first=1;
    last=n-1;
        m=(first + last)/2;
        while(first <= last)
        {
            if(arr[m]<x)
            first = m+1;
            else if(arr[m]==x)
            {
                cout<<x<<" found at position "<<m+1;
            break;
            }
            else
                last=m-1;
            m=(first+last)/2;
        }
        if(first>last)
            cout<<"The no. searched is not in the given array"<<endl;

    return 0;
}
