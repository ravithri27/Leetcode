class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        int ans=0;
        deque<int> max,min;
        int left=0;
        for(int right=0;right<n;right++){
            while(!min.empty()&&nums[min.back()]>=nums[right]){
                min.pop_back();
            }
            min.push_back(right);
            while(!max.empty()&&nums[max.back()]<=nums[right]){
                max.pop_back();
            }
            max.push_back(right);

            while(nums[max.front()]-nums[min.front()]>limit){
                if(max.front()==left){
                    max.pop_front();
                }
                if(min.front()==left){
                    min.pop_front();
                }
                left++;
            }
            if(ans<right-left+1){
                ans=right-left+1;
            }
        }
        return ans;
    }
};