//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> ans;
    void dfs(int i, int j , vector<vector<int>>& matrix, int r, int c,vector<pair<int,int>>& dir, int k){
        ans.push_back(matrix[i][j]);
        matrix[i][j] = -1;
        int x = i + dir[k].first, y = j + dir[k].second;
        int tx = x, ty = y;
        while(!(x>=0 && x < r &&  y>=0 &&  y < c && matrix[x][y] != -1))
        {
            k = (k+1)%4;
            x = i + dir[k].first, y = j + dir[k].second;
            if(tx == x && ty == y)
                return;
        }
        dfs(x, y, matrix, r, c, dir, k);
        
    }
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        ans = vector<int> ();
        vector<pair<int,int>> dir{{0,1},{1,0}, {0,-1},{-1,0}};
        dfs(0, 0, matrix, r , c, dir, 0);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends