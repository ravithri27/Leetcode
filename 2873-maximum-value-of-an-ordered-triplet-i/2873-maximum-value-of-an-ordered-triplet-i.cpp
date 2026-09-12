class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n=nums.size(),ans=0,sum=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    sum=(long long)(nums[i]-nums[j])*nums[k];
                    if(sum>ans){
                        ans=sum;
                    }
                }
            }
        }
        return ans;
    }
};