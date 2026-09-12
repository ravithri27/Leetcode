class Solution {
public:
    void storeSubsets(vector<int>& arr,vector<int>& an,int i,vector<vector<int>>& ans){
        if(i==arr.size()){
            ans.push_back({an});
            return;
        }
        an.push_back(arr[i]);
        storeSubsets(arr,an,i+1,ans);
        an.pop_back();
        int ind=i+1;
        while(ind<arr.size()&&arr[ind]==arr[ind-1]){
            ind++;
        }
        storeSubsets(arr,an,ind,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> an;
        storeSubsets(nums,an,0,ans);
        return ans;
    }
};