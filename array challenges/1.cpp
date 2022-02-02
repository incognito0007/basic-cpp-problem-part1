// given an array a[] of size n. For every i from 0 to n-1 output max (a[0]....a[i])
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        cout<<maxNo<<" ";
    }
    
    return 0;
}