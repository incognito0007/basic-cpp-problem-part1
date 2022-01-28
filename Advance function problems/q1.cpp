#include<iostream>
using namespace std;

int add(int n){
    int sum;
    sum = n*(n+1)/2;
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<"the sum of first "<<n<<" natural number is "<<add(n)<<endl;
    return 0;
}
