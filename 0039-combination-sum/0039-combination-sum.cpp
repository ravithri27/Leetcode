class Solution {
public:
    set<vector<int>> s;
    void store(vector<int>& arr,vector<int>& an,int i,vector<vector<int>>& ans,int target){
        if(target==0){
            if(s.find(an)==s.end()){
                ans.push_back({an});
                s.insert(an);
            }
            return;
        }
        if(target<0||i==arr.size()){
            return;
        }
        an.push_back(arr[i]);
        store(arr,an,i+1,ans,target-arr[i]);
        store(arr,an,i,ans,target-arr[i]);
        an.pop_back();
        store(arr,an,i+1,ans,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> an;
        store(candidates,an,0,ans,target);
        return ans;
    }
};