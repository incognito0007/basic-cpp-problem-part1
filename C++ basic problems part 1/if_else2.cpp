#include <iostream>
using namespace std;


int main(){
    int savings;
    
    cout<<"money saved by rahul is ";
    cin>>savings;

    if (savings >= 10000)
    {
        if (savings >= 15000)
        {
            cout<<"roadtrip with neha";
        }
        else if(savings >= 12000)
        {
            cout<<"candle night dinner with neha";
        }
        else{
            cout<<"meetup with neha";
        }
        // cout<<"Rahul will go on a date with Neha";
    }
    else if(savings >=5000)
    {
        cout<<"Rahul will go on a date with Rashmi";
    }
    else
    {
        cout<<"Rahul will go with friends";
    }
    

    return 0;
    
}