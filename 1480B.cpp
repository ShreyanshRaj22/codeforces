#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,n;
    cin>>a>>b>>n;
    ll ma[n];
    ll mb[n];
    ll maxa=0;
    for(int i=0;i<n;i++) {cin>>ma[i];if(ma[i]>maxa)maxa=ma[i];}
    for(int i=0;i<n;i++) cin>>mb[i];
    ll s=0,x;
    for(int i=0;i<n;i++)
    {
        if(mb[i]%a==0) x=mb[i]/a;
        else x=mb[i]/a+1;
        s= s+ x*ma[i];

    }
    ll d = b-s+maxa;
    if(d>0) cout<<"YES\n";
    else 
    cout<<"NO\n";
    
    }
return 0;
}
