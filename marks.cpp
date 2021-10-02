#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0,l;
    cin>>n>>m;
    int arr[n+1][m+1],hightest[m];
    for(int k=0;k<m;k++)
        hightest[k]=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            l=0;
            l=s[j]-'0';
            arr[i][j]=l;
            hightest[j]=max(hightest[j],arr[i][j]);
        }
    }
    for(int x=0;x<n;x++)
        for(int y=0;y<m;y++)
            if(arr[x][y]==hightest[y])
            {
                count++;
                break;
            }
    cout<<count<<endl;
    return 0;
}