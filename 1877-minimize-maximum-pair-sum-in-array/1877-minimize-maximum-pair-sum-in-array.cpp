class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int pairmax=nums[i]+nums[j];
            if(ans<pairmax){
                ans=pairmax;
            }
            i++;
            j--;
        }
        return ans;
    }
};