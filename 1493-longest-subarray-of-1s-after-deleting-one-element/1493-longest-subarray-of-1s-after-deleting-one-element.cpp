class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int i=0,j=0,n=nums.size(),ans=0;
       vector<int> freq(2,0);
       while(j<n){
        freq[nums[j]]++;
        while(i<j&&freq[0]>1){
            freq[nums[i]]--;
            i++;
        }
        if(ans<freq[1]){
            ans=freq[1];
        }
        j++;
       } 
       if(freq[1]==n){
        return n-1;
       }
       return ans;
    }
};