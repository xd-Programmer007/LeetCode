//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    using vi = vector<int>;
    void f(int ind, int sum, vi& arr, vi& ans,int N){
        if(ind == N){
            ans.push_back(sum);
            return;
        }
        f(ind + 1, sum + arr[ind], arr, ans, N);
        f(ind + 1, sum , arr, ans, N);
    }
    
    vi subsetSums(vi arr, int N)
    {
        // Write Your Code here
        vi ans;
        f(0, 0, arr, ans, N);
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
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends