class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sums;
        vector<int> sum(accounts.size(),0);
        for(int i=0;i<accounts.size();i++){
            sums=0;
            for(int j=0;j<accounts[i].size();j++){
                sums=sums+accounts[i][j];
            }
            sum[i]=sums;
        }
        int maxi = sum[0];
        for (int i = 1; i < sum.size(); i++) {
            if (sum[i] > maxi) {
                maxi = sum[i];
            }
        }
        return maxi;
    }
};