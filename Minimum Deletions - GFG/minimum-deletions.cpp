//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int solve(string& s, int i , int j, vector<vector<int>>& dp){
        while(i <= j){
            if(dp[i][j]!=-1)return dp[i][j];
            if(s[i] != s[j]){
                return dp[i][j] = min(solve(s, i+1, j,dp), solve(s, i, j-1,dp)) + 1;
            }
            i++, j--;
        }
        return dp[i][j] = 0;
    }
    int minimumNumberOfDeletions(string s) { 
        // code here
        vector<vector<int>> dp;
        dp.resize(s.length() + 1, vector<int>(s.length() + 1, -1));
        return solve(s, 0 , s.length() - 1,dp);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends