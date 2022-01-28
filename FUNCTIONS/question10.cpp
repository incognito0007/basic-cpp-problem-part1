//legal voting age or not

#include<iostream>
using namespace std;
bool voting(int age){
    if (age>18)
    {
        cout<<"eligible for voting";
        return true;
    }
    cout<<"not eligible";
    return false;
}
int main()
{
    int age;
    cin>>age;
    cout<<voting(age);
    return 0;
}