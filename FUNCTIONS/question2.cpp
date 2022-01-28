// fibonacci series using function
#include<iostream>
using namespace std;

void fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    int tn;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<endl;
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
    }
    
}

int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
