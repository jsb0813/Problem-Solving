#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(a+b<=c)
    {
        c=a+b-1;
    }
    if(a+c<=b)
    {
        b=a+c-1;
    }
    if(c+b<=a)
    {
        a=c+b-1;
    }
    cout<<a+b+c;
}