class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size(),ans=0;
        vector<int> freq(2,0);
        while(j<n){
            freq[nums[j]]++;
            while(i<=j&&freq[0]>k){
                freq[nums[i]]--;
                i++;
            }
            if(ans<freq[1]+freq[0]){
                ans=freq[1]+freq[0];
            }
            j++;
        }
        return ans;
    }
};