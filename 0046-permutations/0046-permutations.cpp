class Solution {
public:
    void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
    }
    void store(vector<int>& arr,vector<int>& an,int ind,vector<vector<int>>& ans,vector<bool>& visited){
        if(ind==arr.size()){
            ans.push_back({an});
            return;
        }
        for(int i=0;i<arr.size();i++){
            if(visited[i]==true){
                continue;
            }
            visited[i]=true;
            an.push_back(arr[i]);
            store(arr,an,ind+1,ans,visited);
            visited[i]=false;
            an.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> an;
        vector<bool> visited(nums.size(),false);
        store(nums,an,0,ans,visited);
        return ans;
    }
};