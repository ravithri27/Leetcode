class Solution {
public:
    int max(int a,int b){
        if(a>b)return a;
        return b;
    }
    int min(int a,int b){
        if(a<b)return a;
        return b;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        int maxsum=nums[0],currmax=0,minsum=nums[0],currmin=0;
        int totalsum=0;
        for(auto x: nums){
            currmax=max(x,currmax+x);
            maxsum=max(maxsum,currmax);
            currmin=min(x,currmin+x);
            minsum=min(minsum,currmin);
            totalsum+=x;
        }
        if(maxsum<0){
            return maxsum;
        }
        return max(maxsum,totalsum-minsum);
    }
};