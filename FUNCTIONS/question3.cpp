// factorial of a number using function

#include<iostream>
using namespace std;

int fact(int n){
    int f =1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    cout<<f;
    return f;
}

int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}