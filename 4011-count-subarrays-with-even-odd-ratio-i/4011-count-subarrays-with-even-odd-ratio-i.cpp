class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int cnt=0;
        vector<int> hash(2,0);
        for(int i=0;i<n;i++){
            hash[0]=0;
            hash[1]=0;
            for(int j=i;j<n;j++){
                hash[nums[j]%2]++;
                if(hash[1]<=0){
                    continue;
                }else if(1LL*hash[0]*b>1LL*a*hash[1]){
                    continue;
                }else{
                    cnt++;
                }
            }
        }
        return cnt;
    }
};