#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,b=500,m;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(k%a[i]==0)
        {    m=min(k/a[i],b); 
             b=m;
        }
    }
    cout<<m;
    return 0;
}