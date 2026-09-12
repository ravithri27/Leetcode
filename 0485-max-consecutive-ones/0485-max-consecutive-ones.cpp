class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,max=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                max++;
            }else{
                max=0;
            }
            if(max>cnt){
                cnt=max;
            }
        }
        return cnt;
    }
};