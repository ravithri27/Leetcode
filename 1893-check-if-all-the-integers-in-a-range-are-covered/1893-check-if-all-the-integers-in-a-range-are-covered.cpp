class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n=ranges.size();
        int cnt=0;
        for(int i=left;i<=right;i++){
            bool covered=false;
            for(int j=0;j<n;j++){
                if(ranges[j][0]<=i&&ranges[j][1]>=i){
                    covered=true;
                    break;
                }
            }
            if(!covered){
                return false;
            }
        }
        return true;
    }
};