#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int ct(int i,int j,vector<vector<int>>&v)
{
    if(i==v.size()) return 0;
    if(j==v[0].size()) return 10000000;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=min(ct(i,j+1,v),v[i][j]|ct(i+1,0,v));
}
int main()
{
   memset(dp,-1,sizeof(dp));
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        vector<int>a;
        for(int j=0;j<m;j++)
        {
            int val;
            cin>>val;
            a.push_back(val);
        }
        v.push_back(a);
    }
    cout<<ct(0,0,v)<<endl;
}
