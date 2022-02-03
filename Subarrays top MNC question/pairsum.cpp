#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
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