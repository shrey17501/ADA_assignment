#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(n*2==k)
        cout<<n;
    else
    {
        int x=k/n;
        if(x>=3)
            cout<<"0";
        else
        {
            int y=k%n;
            cout<<n-y;
        }
    }
    return 0;
}