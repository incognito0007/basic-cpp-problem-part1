// Given an unsorted array A of size N of non-negative integers, find a continuous
// subarray which adds to a given number S.



#include<iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
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

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == s)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
        sum = 0;
    }
    


    return 0;
}