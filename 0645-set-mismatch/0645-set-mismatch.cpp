class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        vector<int> hash(n+1);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(hash[i]==2){
                res.push_back(i);
                break;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(hash[i]==0){
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};