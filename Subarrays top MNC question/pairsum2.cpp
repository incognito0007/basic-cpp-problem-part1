#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low<high){
        if (arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << pairsum(arr, n, k);

    return 0;
}