class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixsum(n);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        int min=prefixsum[0];
        for(int i=1;i<n;i++){
            if(min>prefixsum[i]){
                min=prefixsum[i];
            }
        }
        if(min>=0){
            return 1;
        }
        return -(min)+1;
    }
};