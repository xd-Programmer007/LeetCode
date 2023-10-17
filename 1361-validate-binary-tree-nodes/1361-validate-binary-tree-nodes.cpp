class Solution {
public:
    int findParent(vector<int>& par,int i){
        return (par[i] == -1)?i : findParent(par, par[i]);
    }
    bool f(int lchild, int par){
        if(lchild == par)
            return false;
        return true;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> par(n, -1);
        for(int i = 0 ; i < n; i++){
            int lchild = leftChild[i];
            int rchild = rightChild[i];
            // int parentI = findParent(par,i);
            bool f1 = (lchild!=-1 &&  (lchild == findParent(par,i) || par[lchild] != -1));
            bool f2 = (rchild != -1 && (rchild == findParent(par,i)|| par[rchild] != -1));
            if( f1 || f2 )
                return false;
            if(lchild != -1)par[lchild] = i;
            if(rchild != -1)par[rchild] = i;
        }
        int pr_cnt = 0;
        for(auto ele : par)
                if(ele == -1 )
                    if(pr_cnt == 1)
                            return false;
                    else
                        pr_cnt++;
        return true;
    }
};