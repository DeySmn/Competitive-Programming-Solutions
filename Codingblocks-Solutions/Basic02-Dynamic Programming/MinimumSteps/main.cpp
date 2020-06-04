#include <iostream>
#include<climits>
using namespace std;
/***
//Minimum Steps to One

Logic-
if n%3==0 n/3
if n%2==0 n/2
else n=n-1

//Top-Down [ Recursion + Memoization ]
***/
int minStepsT(int n,int dp[])
{
    //Base Case
    if(n==1)
        return 0;
     //Look up if n is already computed

     if(dp[n]!=0)
        return dp[n];

    //Compute if dp[n] is not known(for first)
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;

    if(n%2==0)
        op1=minStepsT(n/2,dp);
    if(n%3==0)
        op2=minStepsT(n/3,dp);
    op3=minStepsT(n-1,dp);
    dp[n]=min(min(op1,op2),op3)+1;
    return dp[n];
}

// Bottom-up Approach
int minStepsB(int n,int dp[])
{
    //Base Case
    dp[1]=0;
    for(int i=2;i<=n;i++){
        int op1,op2,op3;
        op1=op2=op3=INT_MAX;

        if(i%2==0)
            op1=dp[i/2];
        if(i%3==0)
            op2=dp[i/3];
        op3=dp[i-1];
        dp[n]=min(min(op1,op2),op3)+1;
    }
    return dp[n];

}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int dp[100005]={0};
	cout<<minStepsT(n,dp)<<"\n";
	cout<<minStepsB(n,dp);
    return 0;
}
