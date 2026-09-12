class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==2){
            return (nums[0]-1)*(nums[1]-1);
        }
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int max=(nums[i]-1)*(nums[j]-1);
            if(max>ans){
                ans=max;
            }
            if(nums[i]<nums[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};