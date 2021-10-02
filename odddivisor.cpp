#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
            cin>>n;
            if(n%2==1)
                cout<<"YES"<<endl;
            else
            {
                if(((n)&(n-1))==0)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
    
        /*int n,flag=0;
        cin>>n;
        for(int i=3;i<=n;i+=2)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;*/
    }
    return 0;
}