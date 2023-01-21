class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        //steps are  as follows
        //swap the elemests
        //and then reverse
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        
    }
};