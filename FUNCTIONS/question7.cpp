// character is alphabet or not 

#include<iostream>
using namespace std;

bool givenChar(char alpha){
    if(isalpha(alpha)){
        return true;
    }
    return false;
}

int main()
{
    char alpha;
    cin>>alpha;

    if(givenChar(alpha)){
        cout<<"it is an alphabet";
    }
    else{
        cout<<"not an alphabet";
    }
    return 0;
}