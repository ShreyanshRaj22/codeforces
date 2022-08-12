#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    if(n*(n+1)/2==k) cout<<0<<"\n";
    else
    {
    ll ans=n-(ll)((3.0*-1+sqrt(9+8*(n+k)))/2);
    cout<<ans<<"\n";
    }
    return 0;
}