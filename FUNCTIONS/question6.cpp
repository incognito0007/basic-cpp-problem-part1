// given number is odd or even 

#include<iostream>
using namespace std;

bool givenNum(int n){
    if (n%2==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    if (givenNum(n))
    {
        cout<<"it is a even number";
    }
    else{
        cout<<"it is odd number";
    }
    return 0;
}
