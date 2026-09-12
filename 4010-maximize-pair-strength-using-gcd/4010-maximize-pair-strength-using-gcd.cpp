class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        if (n == 2) {
            return (1LL*nums[0] * nums[1]) /
                   (1LL * gcd(nums[0], nums[1]) * gcd(nums[0], nums[1]));
        }
        long long res = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long g=gcd(nums[i],nums[j]);
                long long ans=1LL*nums[i] * nums[j] / (1LL*g*g);
                if(ans>res){
                    res=ans;
                }
            }
        }
        return res;
    }
};