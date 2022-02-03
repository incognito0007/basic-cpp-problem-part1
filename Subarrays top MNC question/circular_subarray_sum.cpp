#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
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
    return maxcurrSum;
}


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

    int wrapsum;
    int nonwrapsum;
    
    nonwrapsum = kadane(arr,n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i]; 
        arr[i] = -arr[i];
    }
    
    wrapsum = totalsum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum);

    return 0;
}