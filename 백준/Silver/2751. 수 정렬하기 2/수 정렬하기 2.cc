#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int arr[1000000];
int tmp[1000000];

void Merge(int left, int right)
{
    int mid=(left+right)/2;

    int i=left, j=mid+1, k=left;

    while(i<=mid && j<=right)
    {
        if(arr[i]<=arr[j]) tmp[k++]=arr[i++];
        else tmp[k++]=arr[j++];
    }

    int t=i>mid ? j:i;

    while(k<=right) tmp[k++]=arr[t++];

    for(int i=left;i<=right;i++) arr[i]=tmp[i];
}

void MergeSort(int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        MergeSort(left,mid);
        MergeSort(mid+1,right);
        Merge(left,right);
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];

    MergeSort(0,n-1);

    for(int i=0;i<n;i++) cout<<arr[i]<<"\n";

}