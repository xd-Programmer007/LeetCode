//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {
  // Create a table to store the subproblem solutions.
      int maxi  = *max_element(arr , arr+n);
      if(maxi < 0) return maxi;
      vector<long long> dp(n+1, 0);
      for(int i = n -1 ; i >= 0 ; i--){
          dp[i] = max((long long ) arr[i], ((long long) arr[i]) + dp[i+1]);
      }
      return *max_element(dp.begin(), dp.end());
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends