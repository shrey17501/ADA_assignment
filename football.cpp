#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[99],sum=0,total=0,flag=0;
    cin>>s;
    int l=strlen(s);
    if(l<7)
        cout<<"NO";
    else
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                sum++;
                total=0;
                if(sum==7)
                {    flag=1;break;}
            }
            else
            {
                total++;
                sum=0;
                if(total==7)
                {   flag=1;break;}
            }
        }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    }
    return 0;
}