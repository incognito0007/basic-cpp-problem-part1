#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int rbDays = 0;
    int mx= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>mx){
            rbDays++;
        }
        mx =  max(mx,arr[i]);
    }
    cout<<rbDays;

    return 0;
}