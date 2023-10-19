//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	using pi = pair<int,int>;
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector<bool> vis(V, false);
	    queue<pi> q;
	    q.push({0, 0});
	    vis[0] = true;
	    while(!q.empty()){
	        auto curr = q.front();q.pop();
	        if(curr.first == X)
	            return curr.second;
	       for(auto adjV : adj[curr.first]){
	           if(!vis[adjV]){
	               vis[adjV] = true;
	               q.push({adjV , curr.second + 1});
	           }
	       }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends