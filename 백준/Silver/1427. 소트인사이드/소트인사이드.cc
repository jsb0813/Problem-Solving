#include<iostream>
#include<algorithm>
using namespace std;



int main()
{

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n,i,digit[10]={};
    cin>>n;

    for(i=0;n>0;i++)
    {
        digit[i]=n%10;
        n/=10;
    }
    sort(digit,digit+i,greater<int>());

    for(int j=0;j<i;j++)
    {
        cout<<digit[j];
    }

    return 0;
}