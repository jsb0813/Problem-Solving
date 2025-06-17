#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, m, s=0, card[100]={};
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>card[i];
    }

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int tmp=card[i]+card[j]+card[k];
                if(tmp<=m && tmp>s) s=tmp;
            }
        }
    }

    cout<<s;
}