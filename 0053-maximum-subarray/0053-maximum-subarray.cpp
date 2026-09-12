class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long max=INT_MIN,sum=0;
        int s,start,end;
        for(int i=0;i<nums.size();i++){
            if(sum==0){
                s=i;
            }
            sum+=nums[i];
            if(max<sum){
                max=sum;
                start=s;
                end=i;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};