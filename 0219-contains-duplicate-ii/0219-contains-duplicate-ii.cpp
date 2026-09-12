class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1||k==0){
            return false;
        }
        map<int,int> mpp;
        int i=0,j=1;
        mpp[nums[i]]++;
        while(j<n){
            if(abs(i-j)>k){
                mpp[nums[i]]--;
                i++;
            }
            mpp[nums[j]]++;
            if(mpp[nums[j]]==2){
                return true;
            }
            j++;
        }
        return false;
    }
};