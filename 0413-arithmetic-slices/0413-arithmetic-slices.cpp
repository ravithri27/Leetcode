class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        if(n<3){
            return 0;
        }
        for(int i=0;i<n-2;i++){
            for(int j=i+2;j<n;j++){
                int check=0;
                for(int k=i+1;k<j;k++){
                    if(nums[k]-nums[k-1]==nums[k+1]-nums[k]){
                        check++;
                    }
                }
                if(check==j-i-1){
                    cnt++;
                }else{
                    break;
                }
            }
        }
        return cnt;
    }
};