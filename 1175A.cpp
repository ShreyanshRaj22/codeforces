#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll c=0;
        ll temp=n;
        while (temp!=0)
        {
            
            c=c+temp%k+1;
            temp=temp/k;
        }
        cout<<--c<<"\n";
        
    }
    
    return 0;
}