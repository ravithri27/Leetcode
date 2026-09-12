class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto x:nums1){
            ans.push_back(x);
        }
        for(auto x:nums2){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        int mid=ans.size()/2;
        if(ans.size()%2!=0){
            return double(ans[mid]);
        }
        return double((ans[mid-1]+ans[mid])/2.00);
    }
};