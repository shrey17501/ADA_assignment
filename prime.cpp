#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
        if(n%i==0) 
        {
            cout<<'N'<<endl;
            return 0;
        }
        else cout<<'Y'<<endl;
    return 0;
}