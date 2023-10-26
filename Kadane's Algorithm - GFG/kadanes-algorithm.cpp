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
      int maxim  = *max_element(arr , arr+n);
      if(maxim < 0) return maxim;
      long long localMax = 0, maxi = 0;
      for(int i = n -1 ; i >= 0 ; i--){
           localMax = max((long long ) arr[i], ((long long) arr[i]) + localMax);
           maxi = max(maxi , localMax);
      }
      return maxi;
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