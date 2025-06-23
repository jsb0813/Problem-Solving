#include<iostream>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a<b;
}

int main()
{

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    pair<int,int> coord[100000];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        coord[i].first=x;
        coord[i].second=y;
    }

    sort(coord,coord+n,compare);

    for(int i=0;i<n;i++)
    {
        cout<<coord[i].first<<" "<<coord[i].second<<"\n";
    }

    return 0;
}