//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    using vvi = vector<vector<int>>;
    
    int minimumNumberOfDeletions(string s) { 
        // code here
        int n = s.length();
        vvi dp( n , vector<int> (n , 0));
        for(int i = 0; i < n; i++)
            dp[i][i] = 1;
            
        for(int k = 1 ; k < n ; k++){
            int i = 0, j = k;
            while(i < n && j < n){
                if(s[i] != s[j])
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
                else
                    dp[i][j] = dp[i+1][j-1]+2;
                i++, j++;
            }
        }
        return n - dp[0][n-1];
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