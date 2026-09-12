class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int are=nums[i];
            for(int j=i;j<n;j++){
                are=are|nums[j];
                if(are>=k){
                    if(ans>j-i+1){
                        ans=j-i+1;
                    }
                }
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};