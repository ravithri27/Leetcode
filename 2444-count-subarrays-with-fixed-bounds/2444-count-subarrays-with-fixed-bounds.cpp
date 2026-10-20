class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        deque<int> min,max;
        int left=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK||nums[i]>maxK){
                min.clear();
                max.clear();
                left=i+1;
                continue;
            }
            while(!min.empty()&&nums[min.back()]>=nums[i]){
                min.pop_back();
            }
            while(!max.empty()&&nums[max.back()]<=nums[i]){
                max.pop_back();
            }
            min.push_back(i);
            max.push_back(i);
            if(nums[min.front()]==minK&&nums[max.front()]==maxK){
                int mini;
                if(min.front()<max.front()){
                    mini=min.front();
                }else{
                    mini=max.front();
                }
                ans+=mini-left+1;
            }
        }
        return ans;
    }
};