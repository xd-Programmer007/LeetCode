//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    map<int,int> m;
    vector<int> r  = {-1,0,1,0},c = {0,-1,0,1};
    void bfs(vector<vector<int>>& grid,vector<vector<int>> &vis,int x,int y,int &count){
        queue<pair<int,int>> q;
        q.push({x,y});
        grid[x][y] = count;
        vis[x][y] = 1;
        m[count]++;
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            int row=temp.first,col=temp.second;
            for(int i=0;i<4;i++){
                int nr = row+r[i],nc = col+c[i];
                if(nr<grid.size() && nr>=0 && nc<grid[0].size() && nc>=0 && grid[nr][nc]==1 && vis[nr][nc]==0){
                    q.push({nr,nc});
                    grid[nr][nc] = count;
                    m[count]++;
                    vis[nr][nc] = 1;
                }
            }
        }
        count=count+1;
        return;
    }
    int largestIsland(vector<vector<int>>& grid) 
    {
        int count = 2;
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    bfs(grid,vis,i,j,count);
                }
            }
        }
        int ans = 0;
        for(auto t:m){
            ans = max(ans,t.second);
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    set<int> s;
                    for(int k=0;k<4;k++){
                        int nr = i+r[k],nc = j+c[k];
                         if(nr<grid.size() && nr>=0 && nc<grid[0].size() && nc>=0 ){
                             s.insert(grid[nr][nc]);
                         }
                    }
                    int t = 1;
                    for(auto x:s){
                        t+=m[x];
                    }
                    ans = max(ans,t);
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