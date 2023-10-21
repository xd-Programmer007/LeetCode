//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    using ll = long long;
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        ll ans = 0;
        for(int i =1; i <= N ;i++){
            ll cnt = (N/i);
            ans += (i*cnt);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends