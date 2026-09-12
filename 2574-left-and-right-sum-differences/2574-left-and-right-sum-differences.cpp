class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        vector<int> prefixsumleft(n);
        vector<int> prefixsumright(n);
        prefixsumleft[0]=0;
        for(int i=1;i<n;i++){
            prefixsumleft[i]=prefixsumleft[i-1]+nums[i-1];
        }
        prefixsumright[n-1]=0;
        for(int i=n-2;i>=0;i--){
            prefixsumright[i]=prefixsumright[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++){
            res.push_back(abs(prefixsumleft[i]-prefixsumright[i]));
        }
        return res;
    }
};