// kdanes algorthim


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

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int currSum = 0;
    int maxcurrSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxcurrSum = max(currSum,maxcurrSum);
    }
    cout<<maxcurrSum;
    
    return 0;
}