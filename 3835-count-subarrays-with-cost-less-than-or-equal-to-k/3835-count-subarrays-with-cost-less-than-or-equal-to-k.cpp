class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long ans=0;
        deque<int> max,min;
        int left=0;
        for(int right=0;right<n;right++){
            while(!max.empty()&&nums[max.back()]<=nums[right]){
                max.pop_back();
            }
            while(!min.empty()&&nums[min.back()]>=nums[right]){
                min.pop_back();
            }
            max.push_back(right);
            min.push_back(right);
            long long cost=1LL*(nums[max.front()]-nums[min.front()])*(right-left+1);
            while(cost>k){
                if(max.front()==left){
                    max.pop_front();
                }
                if(min.front()==left){
                    min.pop_front();
                }
                left++;
                cost=1LL*(nums[max.front()]-nums[min.front()])*(right-left+1);
            }
            ans+=right-left+1;
        }
        return ans;
    }
};