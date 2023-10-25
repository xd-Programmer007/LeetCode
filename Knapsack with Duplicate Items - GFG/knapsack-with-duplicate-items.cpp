//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    using vi = vector<int>;using vvi = vector<vi>;
    int solve(int idx, int n, int W, int val[], int wt[], vvi& dp){
        if(idx >= n) return 0;
        if(dp[idx][W] != -1)return dp[idx][W];
        int skip = solve(idx+1,n ,W,val, wt,dp), take= 0;
        if(wt[idx] <= W)
            take= val[idx] + solve(idx, n, W-wt[idx], val, wt, dp);
        return dp[idx][W] = max(skip , take);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vvi dp(N+1,vi (W+1, -1) );
        return solve(0, N, W, val, wt, dp);
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends