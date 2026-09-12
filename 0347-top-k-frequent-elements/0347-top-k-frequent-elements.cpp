class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            pq.push({x.second,x.first});
        }
        while(k--){
            pair<int,int> max=pq.top();
            ans.push_back(max.second);
            pq.pop();
        }
        return ans;
    }
};