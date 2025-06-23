#include<iostream>
#include<algorithm>
using namespace std;

bool compare(string a, string b)
{
    if(a.size()==b.size()) return a<b;
    else return a.size()<b.size();
}

int main()
{

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;

    string texts[20000];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>texts[i];
    }

    sort(texts,texts+n,compare);

    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
            if(texts[i]==texts[i-1]) continue;
        }
        cout<<texts[i]<<"\n";
    }

    return 0;
}