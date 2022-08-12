#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    if(k%2==0)
    {
        if(n<k/2) cout<<0<<"\n";
        else
        {
            if(n>=k) cout<<k/2-1<<"\n";
            else
            {
                cout<<n-k/2<<"\n";

            }
        }
    }else
    {
        if(n<=k/2) cout<<0<<"\n";
        else
        {
            if(n>=k) cout<<k/2<<"\n";
            else
            {
                cout<<n-k/2<<"\n";
            }

        }

    }
    return 0;
}