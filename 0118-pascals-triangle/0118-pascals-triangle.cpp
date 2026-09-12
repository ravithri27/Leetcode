class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if(numRows==1){
            return ans;
        }
        for(int i=0;i<numRows-1;i++){
            vector<int> dummy;
            for(int j=0;j<ans[i].size();j++){
                if(j==0){
                    dummy.push_back(ans[i][j]);
                }else{
                    dummy.push_back(ans[i][j-1]+ans[i][j]);
                }
            }
            dummy.push_back(ans[i][ans[i].size()-1]);
            ans.push_back(dummy);
        }
        return ans;
    }
};