class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int p = 1;
        vector<int> row{1};
        for(int i = 1; i <= rowIndex ; i++){
            p =(long(rowIndex +1 - i ) * p)/ i;
            row.push_back(p);
        }
        return row;
    }
};