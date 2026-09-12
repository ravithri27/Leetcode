class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        vector<int> ans;
        unordered_map<int,int> mpp;
        stack<int> st;
        for(int i=n2-1;i>=0;i--){
            while(!st.empty()&&st.top()<=nums2[i]){
                st.pop();
            }
            if(!st.empty()){
                mpp[nums2[i]]=st.top();
            }else{
                mpp[nums2[i]]=-1;
            }
            st.push(nums2[i]);
        }
        for(auto x:nums1){
            ans.push_back(mpp[x]);
        }
        return ans;
    }
};