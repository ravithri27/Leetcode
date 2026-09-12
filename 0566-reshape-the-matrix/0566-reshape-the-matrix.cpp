class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r1=mat.size(),c1=mat[0].size();
        if(r1*c1!=r*c){
            return mat;
        }
        vector<vector<int>> resu(r,vector<int>(c));
        int k=0,l=0;
        if(mat.size()*mat[0].size()==r*c){
        for(int i=0;i<mat.size()&&k<r;i++){
            for(int j=0;j<mat[0].size()&&l<c;j++){
                resu[k][l]=mat[i][j];
                l++;
                if(c==l){
                    k++;
                    l=0;
                }
            }
        }
    }
    return resu;
    }
};