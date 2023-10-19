//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    using vs = vector<string>; using um = unordered_map<string,bool>;
    void fun(int idx,um& dict, string& s, vs& ans,vs sentence, const int& n){
        if(idx == s.length()){
            string main;
            for(auto word : sentence)
                main += word + ' ';
            main.pop_back();
            ans.push_back(main);
            return;
        }
        string temp = "";
        for(int i = idx; i < s.length(); i++){
            temp.push_back(s[i]);
            if(dict[temp]){
                sentence.push_back(temp);
                fun(i+1, dict, s, ans, sentence, n);
                sentence.pop_back();
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& d, string s)
    {
        // code here
        um dict;
        for(auto word : d)
            dict[word] = true;
        vs ans;
        vs sentence;
        fun(0, dict, s, ans, sentence, n);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends