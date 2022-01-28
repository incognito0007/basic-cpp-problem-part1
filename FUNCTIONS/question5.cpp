// pascal's triangle using function

#include<iostream>
using namespace std;

int fact(int n){
    int f =1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}


int main()
{
    int n;
    cin>>n;

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}