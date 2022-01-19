#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    float avg;
    
    cout<<"enter 1st numer"<<endl;
    cin>>a;

    cout<<"enter 2nd numer"<<endl;
    cin>>b;

    cout<<"enter 3rd numer"<<endl;
    cin>>c;

    avg = (a + b + c)/3;

    cout<<"average of three number is "<<avg;
    return 0;
}