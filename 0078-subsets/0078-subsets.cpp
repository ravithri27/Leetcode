class Solution {
public:
    void getAllSubsets(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>>& AllSubsets){
        if(i==arr.size()){
            AllSubsets.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        getAllSubsets(arr,ans,i+1,AllSubsets);
        ans.pop_back();
        getAllSubsets(arr,ans,i+1,AllSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> AllSubsets;
        vector<int> ans;
        int i=0;
        getAllSubsets(nums,ans,i,AllSubsets);
        return AllSubsets;
    }
};