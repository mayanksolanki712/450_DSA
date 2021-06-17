#include<bits/stdc++.h>
using namespace std;
int reversearray(int arr[],int start,int end)
{
    int temp;
    while(start<end)
    {
        temp= arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
    }

}

int printarray(int arr[], int n)
{
    int i;
    cout<<"the printed array is:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}



int main()
{
    int i,n;
    int *arr;
    arr=new int(n);
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the elemnts of the array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversearray(arr,0,n-1);
    printarray(arr,n);

}
