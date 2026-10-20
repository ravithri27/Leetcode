class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        int left=0;
        deque<int> max,min;
        for(int right=0;right<n;right++){
            while(!min.empty()&&nums[min.back()]>=nums[right]){
                min.pop_back();
            }
            while(!max.empty()&&nums[max.back()]<=nums[right]){
                max.pop_back();
            }
            min.push_back(right);
            max.push_back(right);
            while(nums[max.front()]-nums[min.front()]>2){
                if(max.front()==left){
                    max.pop_front();
                }
                if(min.front()==left){
                    min.pop_front();
                }
                left++;
            }
            ans+=right-left+1;
        }
        return ans;
    }
};