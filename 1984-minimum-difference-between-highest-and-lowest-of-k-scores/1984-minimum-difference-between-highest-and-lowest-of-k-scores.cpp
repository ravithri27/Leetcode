class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==1||n==1){
            return 0;
        }
        int ans=0,min=INT_MAX,max=0;
        sort(nums.begin(),nums.end());
        int i=0,j=k-1;
        min=nums[i];
        max=nums[j];
        ans=max-min;
        while(j<n-1){
            i++;
            min=nums[i];
            j++;
            max=nums[j];
            if(ans>max-min){
                ans=max-min;
            }
        }
        return ans;
    }
};