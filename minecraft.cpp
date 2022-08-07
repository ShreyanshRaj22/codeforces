#include<bits/stdc++.h>
#define ll long long 

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    ll a[n];
    ll ps[n];
    ll os[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i==0){ps[i]==0;}
        else{
            if(a[i]<a[i-1]) ps[i]=ps[i-1]+a[i-1]-a[i];
            else ps[i]=ps[i-1];
        }
    }
    os[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1]) os[i]=os[i+1]+a[i+1]-a[i];
        else os[i]=os[i+1];
    }
    
    while(m--)
    {
        int s,t;
        cin>>s>>t;
        if(s==t) cout<<0<<"\n";
        else if(s<t) cout<<ps[t-1]-ps[s-1]<<"\n";
        else cout<<os[t-1]-os[s-1]<<"\n";
    }
    
    return 0;
}