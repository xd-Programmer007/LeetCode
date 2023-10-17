//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<int> row, col;
        for(int i = 0; i < N ; i++){
            graph[i][i] = 1;
        }
        
        for(int i = 0; i < N; i++){
            for(int j = 0;j < N ; j++){
                if(graph[j][i] == 1)
                    col.push_back(j);
            }
            for(int k = 0; k < N; k++){
                if(graph[i][k] == 1)
                    row.push_back(k);
            }
            for(int i =0 ;i < col.size(); i++){
                for(int j = 0; j< row.size(); j++){
                    graph[col[i]][row[j]] = 1;
                }
            }
            row.clear();
            col.clear();
        }
        return graph;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends