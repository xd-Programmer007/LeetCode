class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> maxHeap;
        int i = 0;
        for(auto ele : score){
            maxHeap.push({ele, i++});
        }
        vector<string> ans(score.size()), pos{"Gold Medal", "Silver Medal","Bronze Medal"};
        int j = 0;
        i = 4;
        while(!maxHeap.empty()){
            pair<int,int> idx = maxHeap.top();
            maxHeap.pop();
            if(j < 3)
                ans[idx.second] = pos[j++];
            else
                ans[idx.second] = to_string(i++);
        }
        return ans;
    }
};