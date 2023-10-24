//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    using vi = vector<int>; using vvi = vector<vi>;
    bool isPalindrome(int i, int j, string& s){
        while(i <= j){
            if(s[i] != s[j])
                return false;
            i++, j--;
        }
        return true;
    }
    int partition(int idx, string s, int n,vi& dp){
        if(idx == n-1 || isPalindrome(idx , n-1, s))
            return 0;
        if(dp[idx] != -1) return dp[idx];
        int min_cuts = n - 1 - idx;
        for(int j = idx; j < n ; j++){
            if(isPalindrome(idx, j, s)){
                min_cuts = min(min_cuts , 1 + partition( j+1, s, n, dp));
            }
        }
        return dp[idx] = min_cuts;
    }
    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        vi dp(n+1, -1);
        return partition(0, str , n,dp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends