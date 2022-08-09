#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll x=a^b;
        if(n%3==0) cout<<a<<"\n";
        else if(n%3==1) cout<<b<<"\n";
        else cout<<x<<"\n";
    }
    return 0;
}