#include <iostream>
#include <climits>
#include<string.h>
using namespace std;
int minCoinT(int n,int dp[],int T,int coins[]){
    //Base Case
    if(n==0)
        return 0;
    int ans=INT_MAX;
    for(int i=0;i<T;i++)
    {
        if(n-coins[i]>=0)
        {
            int subprob=minCoinT(n-coins[i],dp,T,coins);
            ans=min(ans,subprob+1);
        }
    }
    dp[n]=ans;
    return dp[n];
}
int minCoinB(int n,int dp[],int T,int coins[]){

    dp[0]=0;
    for(int i=1;i<=n;i++){
        int ans=INT_MAX;
        for(int j=1;j<T;j++){
            if(n-coins[j]>=0){
                ans=min(ans,dp[i-coins[j]]+1);
            }
        }
        dp[i]=ans;
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    int dp[100];
    memset(dp,0,sizeof(dp));
    int coins[]={1,7,10};
    int T=sizeof(coins)/sizeof(coins[0]);
    cout<<minCoinT(n,dp,T,coins)<<"\n";
    cout<<minCoinB(n,dp,T,coins);
    return 0;
}
