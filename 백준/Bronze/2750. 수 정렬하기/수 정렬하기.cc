#include<iostream>
using namespace std;

int main()
{
    int n,array[1000]={};

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }

}