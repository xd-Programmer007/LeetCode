//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    
    int dfs(int i, int j, int m, int n,int par, vector<vector<int>>& grid){
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        int cnt = 1;
        for(int k = 0; k < 4; k++){
            int x = i + dx[k], y = j + dy[k];
            if((x>=0 && x < m && y>=0 && y < n) && grid[x][y] == 1){
                grid[x][y] = par;
                cnt += dfs(x, y, m, n ,par, grid);
            }
        }
        return cnt;
    }
    
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
        int m = grid.size(), n = grid[0].size();
        vector<int> parent;
        parent.resize(250001, 0);
        int par = 2,ans = 1;
        for(int i = 0; i < m ; i++){
            for(int j = 0 ;j < n ; j++){
                if(grid[i][j] == 1){
                    grid[i][j] = par;
                    parent[par] += dfs(i, j , m , n,par ,grid);
                    ans = max(parent[par], ans);
                    par++;
                }
            }
        }
        
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        for(int i = 0 ; i < m ; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0){
                    int cnt = 1;
                    unordered_set<int> st;
                    for(int k = 0; k < 4; k++){
                        int x = i + dx[k], y = j + dy[k];
                        if((x>=0 && x < m && y>=0 && y < n) && grid[x][y] != 0 ){
                            st.insert(grid[x][y]);
                        }
                    }
                    for(auto it : st)
                        cnt += parent[it];
                    ans = max(cnt, ans);
                        
                }
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends