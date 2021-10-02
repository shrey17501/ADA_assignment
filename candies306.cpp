#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+1]={0};
    if(n%m==0)
    {
        for(int i=0;i<m;i++)
            cout<<n/m<<" ";
    }
    else
    {
    int a=n/m;
    int b=n%m;
    for(int k=0;k<m;k++)
    {
        if(k<(m-b))
            arr[k]=a;
        else
            arr[k]=a+1;
    }
    for(int x=0;x<m;x++)
        cout<<arr[x]<<" ";
    return 0;
    }
}