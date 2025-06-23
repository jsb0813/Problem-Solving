#include<iostream>
#include<algorithm>
using namespace std;

bool compare(pair<int,string> a, pair<int,string> b)
{
    return a.first<b.first;
}

int main()
{

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    pair<int,string> mem[100000];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>mem[i].first>>mem[i].second;
    }

    stable_sort(mem,mem+n,compare);

    for(int i=0;i<n;i++)
    {
        cout<<mem[i].first<<" "<<mem[i].second<<"\n";
    }

    return 0;
}