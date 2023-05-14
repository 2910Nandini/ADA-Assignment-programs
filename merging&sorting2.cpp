//to merge two unsorted arrays and then create a sorted array
#include<iostream>
#include<conio.h>
using namespace std;
int main()                                           //assignment 15
{
    int arr1[50], arr2[50], arrmerge[100];
    int n1, n2, nmerge, i, j, temp;
    cout<<"Enter the Size for 1st and 2nd arrays: ";
    cin>>n1>>n2;
    cout<<"\nEnter unsorted elements for 1st Array: ";
    for(i=0; i<n1; i++)
        cin>>arr1[i];
    cout<<"\nEnter unsorted elements for 2nd Array: ";
    for(i=0; i<n2; i++)
        cin>>arr2[i];
    // merging the two arrays
    for(i=0; i<n1; i++)
    {
        arrmerge[i] = arr1[i];
    }
    for(j=0; j<n2; j++)
    {
        arrmerge[i] = arr2[j];
        i++;
    }
    nmerge = i;
    // sorting the merged array in ascending order
    for(j=0; j<(nmerge-1); j++)
    {
        for(i=0; i<(nmerge-1); i++)
        {
            if(arrmerge[i]>arrmerge[i+1])
            {
                temp = arrmerge[i];
                arrmerge[i] = arrmerge[i+1];
                arrmerge[i+1] = temp;
            }
        }
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<nmerge; i++)
    {
        if(i==(nmerge-1))
            cout<<arrmerge[i];
        else
            cout<<arrmerge[i]<<" ";
    }
    cout<<endl;
    return 0;
}
