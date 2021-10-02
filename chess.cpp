#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q=9,q=9,r=5,R=5,B=3,b=3,K=3,k=3,P=1,p=1,white=0,black=0;
    char chess[8][8];
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            cin>>chess[i][j];
    for(int m=0;m<8;m++)
    {    
        for(int n=0;n<8;n++)
        {
            if(chess[m][n]=='Q')
                white+=9;
            else if(chess[m][n]=='R')
                white+=5;
            else if(chess[m][n]=='B'||chess[m][n]=='N')
                white+=3;
            else if(chess[m][n]=='P')
                white+=1;
            else if(chess[m][n]=='q')
                black+=9;
            else if(chess[m][n]=='r')
                black+=5;
            else if(chess[m][n]=='b'||chess[m][n]=='n')
                black+=3;
            else if(chess[m][n]=='p')
                black+=1;
            else if(chess[m][n]=='K')
                white+=0;
            else if(chess[m][n]=='k')
                black+=0;
            
        }
    }
    if(white==black)
        cout<<"Draw";
    else if(white>black)
        cout<<"White";
    else if(white<black)
        cout<<"Black";
    return 0;
}