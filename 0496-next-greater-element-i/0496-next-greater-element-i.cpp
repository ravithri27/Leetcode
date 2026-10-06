class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int> st;
        vector<int> ans(n);
        ans[n-1]=-1;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()<nums2[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }else{
                ans[i]=st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> res(nums1.size());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    res[i]=ans[j];
                }
            }
        }
        return res;
    }
};