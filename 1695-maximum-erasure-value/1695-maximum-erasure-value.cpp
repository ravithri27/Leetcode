class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size(),ans=0,sum=0;
        int i=0,j=0;
        unordered_set<int> st;
        while(j<n){
            while(st.find(nums[j])!=st.end()){
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            st.insert(nums[j]);
            sum+=nums[j];
            if(ans<sum){
                ans=sum;
            }
            j++;
        }
        return ans;
    }
};