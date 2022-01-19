#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"enter a button"<<endl;
    cin>>button;

    switch (button)
    {
    case 'A':
        cout<<"NAMASTE"<<endl;
        break;

    case 'B':
        cout<<"hello"<<endl;
        break;

    case 'C':
        cout<<"HOlA"<<endl;
        break;

    case 'D':
        cout<<"CIAO"<<endl;
        break;

    case 'E':
        cout<<"NAMASKAR"<<endl;
        break;
    
    default:
        cout<<"still learning"<<endl;
        break;
    }
    return 0;
}