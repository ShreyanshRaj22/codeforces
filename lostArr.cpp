#include<bits/stdc++.h>
#define ll long long
using namespace std;
int be(int n,int x)
{
    int res=1;
    while(n!=0)
    {
        if(n%2!=0){
            res*=x;
        }
        n=n/2;
        x*=x;
    }
    return res;

}
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    int min = be(l,2) - 1 +n-l;
    int max = (n-r)*(be(r-1,2))+be(r,2)-1;
    cout<<min<<" "<<max<<"\n";

    
    return 0;
}