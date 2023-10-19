//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void findPaths(int i, int j, vector<string>& paths ,string path, vector<vector<int>>& mat){
        if(i == mat.size()-1 && j == mat.size()-1)
        {
            paths.push_back(path);
            return;
        }
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        char move[4] = {'R','D','L','U'};
        mat[i][j] = 0;
        for(int k = 0; k < 4; k++){
            int x = i + dx[k], y = j+ dy[k];
            if((x>=0 && x < mat.size() && y >= 0 && y < mat.size()) && mat[x][y] != 0){
                
                path.push_back(move[k]);
                findPaths(x, y, paths, path, mat);
                path.pop_back();
            }
        }
        mat[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &mat, int n) {
        // Your code goes here
        vector<string> paths;
        string path;
        if(mat[0][0] == 0)
            return paths;
        findPaths(0, 0, paths, path, mat);
        // sort(paths.begin(), paths.end());
        return paths;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends