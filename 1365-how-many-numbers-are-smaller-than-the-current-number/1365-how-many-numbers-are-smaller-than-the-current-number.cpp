class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=nums[i]-1;j>=0;j--){
                count+=mpp[j];
            }
            res.push_back(count);
        }
        return res;
    }
};