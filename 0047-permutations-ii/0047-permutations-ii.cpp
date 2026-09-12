class Solution {
public: void swap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
    void generatePermutations(vector<int>& arr, int index,vector<vector<int>>& ans) {
    if (index == arr.size()) {
        ans.push_back({arr});
        return;
    }
    unordered_set<int> used;
    for (int i = index; i < arr.size(); i++) {
        if (used.count(arr[i]))
                continue;

        used.insert(arr[i]);
        swap(arr[index], arr[i]);              
        generatePermutations(arr, index + 1,ans); 
        swap(arr[index], arr[i]); 
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        generatePermutations(nums,0,ans);
        return ans;
    }
};