class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(2*k+1>n){
            return vector<int>(n,-1);
        }
        long long sum=0;
        vector<int> res(n,-1);
        int l=0,ind=k;
        int r=ind+k;
        for(int j=l;j<=r;j++){
            sum+=nums[j];
        }
        res[ind]=sum/(2*k+1);
        ind=ind+1;
        while(ind<n-k){
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            res[ind]=sum/(2*k+1);
            ind++;
        }
        return res;
    }
};