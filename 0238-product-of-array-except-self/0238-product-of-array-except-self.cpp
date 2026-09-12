class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        vector<int> prefix(nums.size());
        prefix[0]=1;
        for(int i=1;i<nums.size();i++){
            prefix[i]=nums[i-1]*prefix[i-1];
        }
        int rp=1;
        for(int i=nums.size()-1;i>=0;i--){
            prefix[i]*=rp;
            rp*=nums[i];
        }
        return prefix;
    }
};