//2 Dimensional Dp problem
#include <iostream>
using namespace std;
//Top-Down
int profitT(int wines[],int i,int j,int y,int dp[][100]){
    //Base case
    if(i>j)
        return 0;
    //Look up if wine is already sold
    if(dp[i][j]!=0)
        return dp[i][j];
    int op1=wines[j]*y+profitT(wines,i,j-1,y+1,dp);
    int op2=wines[i]*y+profitT(wines,i+1,j,y+1,dp);
    return max(op1,op2);

}
//Bottom-Up
int profitB(int wines[],int n,int y,int dp[][100]){

    //Base Case
    for(int i=0;i<n;i++)
        dp[i][i]=wines[i]*n;
    int i=0,k=0;
    for(int diagonal =1;diagonal<=n-1;diagonal++)
    {
        for(i=0;i<n-diagonal;i++)
        {
            k=i+diagonal;
            y=n+1-(k-i+1);
            int op1=wines[k]*y+dp[i][k-1];
            int op2=wines[i]*y+dp[i+1][k];
            dp[i][k]=max(op1,op2);

        }
    }
 //2 D dp Table
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<dp[i][j]<<" ";
        cout<<"\n";
    }
    return dp[0][n-1];

}

int main()
{
    int n;
    int dp[100][100]={0};
    int wines[]={2,3,5,1,4};
    n=sizeof(wines)/sizeof(wines[0]);
    int y=1;
    cout<<profitB(wines,n,y,dp)<<"\n";
    cout<<profitT(wines,0,n-1,y,dp)<<"\n";

    return 0;
}
//Greedy- 49 but in Dp we get-50
