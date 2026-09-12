class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1,c=1,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                c++;
            }else{
                c=1;
            }
            if(c>count){
                count=c;
            }
        }
        return count;
    }
};