class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size(),ans=0;
        unordered_set<int> st,s;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int k=st.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                s.insert(nums[j]);
                if(s.size()==k){
                    ans++;
                }
            }
            s.clear();
        }
        return ans;
    }
};