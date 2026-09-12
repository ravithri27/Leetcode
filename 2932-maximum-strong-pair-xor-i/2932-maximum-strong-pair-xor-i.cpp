class Solution {
public:
    int mini(int& a,int& b){
        if(a>b){
            return b;
        }
        return a;
    }
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(abs(nums[i]-nums[j])<=mini(nums[i],nums[j])){
                    int xor1=nums[i]^nums[j];
                    if(ans<xor1){
                        ans=xor1;
                    }
                }
            }
        }
        return ans;
    }
};