#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n,xi[1000000]={};
    vector<int> xi2;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>xi[i];
        xi2.push_back(xi[i]);
    }

    sort(xi2.begin(),xi2.end());
    xi2.erase(unique(xi2.begin(),xi2.end()),xi2.end());

    for(int i=0;i<n;i++)
    {
        cout<<lower_bound(xi2.begin(),xi2.end(),xi[i])-xi2.begin()<<" ";
    }

    return 0;
}