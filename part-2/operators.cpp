#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b;

    b = a++;

    cout<<a<<"and"<<b<<endl;

    int x = 10;
    int y;

    y = ++x;

    cout<<x<<"and"<<y<<endl;
    return 0;

}