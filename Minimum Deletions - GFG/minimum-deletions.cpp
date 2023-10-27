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
        vector<int> prev(n, 0), curr(n, 1);
        for(int k = 1 ; k < n ; k++){
            int i = 0, j = k, t = 0;
            while(i < n && j < n){
                if(s[i] == s[j])
                    prev[t] = prev[t+1] + 2;
                else
                    prev[t] = max(curr[t],curr[t+1]);
                i++, j++,t++;
            }
            swap(prev, curr);
        }
        return n - curr[0];
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