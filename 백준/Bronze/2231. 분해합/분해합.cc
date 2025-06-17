#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,b,c,d,e,f;
    cin>>n;
    for(a=0;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            {
                for(d=0;d<=9;d++)
                {
                    for(e=0;e<=9;e++)
                    {
                        for(f=0;f<=9;f++)
                        {
                            if(100001*a+10001*b+1001*c+101*d+11*e+2*f==n)
                            {
                                cout<<100000*a+10000*b+1000*c+100*d+10*e+f;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<0;
    return 0;
}