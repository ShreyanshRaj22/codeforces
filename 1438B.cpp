#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>b[i];
        sort(b.begin(),b.end());
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(b[i]==b[i-1]){c=0;break;}
        }
        if(c==0)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}