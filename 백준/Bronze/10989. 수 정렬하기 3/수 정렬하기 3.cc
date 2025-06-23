#include<iostream>
#include<algorithm>
using namespace std;



int main()
{

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[10001]={},n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        arr[tmp]++;
    }

    for(int i=1;i<10001;i++)
    {
        for(int j=0;j<arr[i];j++) cout<<i<<"\n";
    }

    return 0;
}