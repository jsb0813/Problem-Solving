#include<iostream>
using namespace std;

int main()
{
    int dot[100000][2]={};
    int n,xmin=10000,xmax=-10000,ymin=10000,ymax=-10000;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>dot[i][0]>>dot[i][1];
        if(dot[i][0]>xmax) xmax=dot[i][0];
        if(dot[i][0]<xmin) xmin=dot[i][0];
        if(dot[i][1]>ymax) ymax=dot[i][1];
        if(dot[i][1]<ymin) ymin=dot[i][1];
    }
    cout<<(xmax-xmin)*(ymax-ymin);
}