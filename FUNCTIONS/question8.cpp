// maximum and minimum of 2 numbers

#include<iostream>
using namespace std;

int maximum(int a, int b, int c){
    int max;
    if (a>b && a>c)
    {
        max = a;
        return max;
    }
    else if (b>a && b>c)
    {
        max = b;
        return max;
    }
    else if(c>a && c>b){
        max = c;
        return max;
    }
    return max;
}
int minimum(int a, int b, int c){
    int min;
    if (c<a && c<b)
    {
        min = c;
        return min;
    }
    else if (b<a && b<c)
    {
        min = b;
        return min;
    }
    else if(a<c && a<b){
        min = a;
        return min;
    }
    return min;
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"maximum of the three number is "<<maximum(a,b,c)<<endl;
    cout<<"minimum of the three number is "<<minimum(a,b,c)<<endl;
    return 0;
}