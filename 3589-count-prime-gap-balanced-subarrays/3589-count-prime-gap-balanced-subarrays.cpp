class Solution {
public:
    int primeSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
            }
        }
        vector<bool> prime(maxi+1,true);
        if(maxi>=0) prime[0]=false;
        if(maxi>=1) prime[1]=false;
        for(int i=2;i*i<=maxi;i++){
            if(prime[i]){
                for(int j=i*i;j<=maxi;j+=i){
                    prime[j]=false;
                }
            }
        }
        deque<int> max,min;
        int ans=0;
        int left=0;
        int sl=-1,l=-1;
        for(int right=0;right<n;right++){
            if(prime[nums[right]]){
                sl=l;
                l=right;
                while(!min.empty()&&nums[min.back()]>=nums[right]){
                    min.pop_back();
                }
                while(!max.empty()&&nums[max.back()]<=nums[right]){
                    max.pop_back();
                }
                min.push_back(right);
                max.push_back(right);
            }
            while(!max.empty()&&!min.empty()&&nums[max.front()]-nums[min.front()]>k){
                if(max.front()==left){
                    max.pop_front();
                }
                if(min.front()==left){
                    min.pop_front();
                }
                left++;
            }
            if(sl!=-1){
                ans+=sl-left+1;
            }
        }
        return ans;
    }
};