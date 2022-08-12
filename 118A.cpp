#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    char ch;
    
    for (int i = 0; i < a.size(); i++)
    {
        ch=a[i];
        if(ch != 'A' && ch != 'O' && ch != 'Y' && ch != 'E' && ch != 'U' && ch != 'I' && ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i')
        {
            if(ch<=90)
            {
                ch+=32;
                ch=(char)ch;
                cout<<"."<<ch;
            }
            else
            {
                cout<<"."<<ch;
            }
        }
    }
    cout<<"\n";
    
    return 0;
}