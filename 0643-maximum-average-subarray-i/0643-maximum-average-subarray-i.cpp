class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=k-1;
        double avg=0,sum=0;
        for(int i=l;i<k;i++){
            sum+=nums[i];
        }
        avg=sum/k;
        while(r<nums.size()-1){
            sum=sum-nums[l];
            l++;
            r++;
            sum=sum+nums[r];
            if(avg<sum/k){
                avg=sum/k;
            }
        }
        return avg;
    }
};