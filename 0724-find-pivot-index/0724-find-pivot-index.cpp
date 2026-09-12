class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> lsum(nums.size()),rsum(nums.size());
        for(int i=0;i<nums.size();i++){
            int leftsum=0,rightsum=0;
            for(int j=i+1;j<nums.size();j++){
                rightsum+=nums[j];
            }
            rsum[i]=rightsum;
            for(int j=i-1;j>=0;j--){
                leftsum+=nums[j];
            }
            lsum[i]=leftsum;
            if(lsum[i]==rsum[i]){
                return i;
            }
        }
        return -1;
    }
};