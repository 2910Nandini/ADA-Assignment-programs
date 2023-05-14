//selection sort
#include<iostream>
#include<conio.h>
using namespace std;
int main()                                           //assignment 11
{
    int n, arr[50], i, j, temp, small, check, ind;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Original array is\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    for(i=0; i<(n-1); i++)
    {
        check=0;
        small = arr[i];
        for(j=(i+1); j<n; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                check++;
                ind = j;
            }
        }
        if(check!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[ind] = temp;
        }
    }
    cout<<"\nSorted Array is:\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
}
