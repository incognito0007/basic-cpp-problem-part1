#include<iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int add(int a, int b){
    print(a);
    print(b);
    int sum = a + b;
    return sum;
}

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<add(a,b);
//     return 0;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}