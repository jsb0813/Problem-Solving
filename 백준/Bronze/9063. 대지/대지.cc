#include<iostream>
using namespace std;

int main()
{
    int n,x,y,xmin=10000,xmax=-10000,ymin=10000,ymax=-10000;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>xmax) xmax=x;
        if(x<xmin) xmin=x;
        if(y>ymax) ymax=y;
        if(y<ymin) ymin=y;
    }
    cout<<(xmax-xmin)*(ymax-ymin);
}