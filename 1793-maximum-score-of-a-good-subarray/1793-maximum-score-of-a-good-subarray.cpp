class Solution {
public:
    int minimum(int& a,int& b){
       if(a>b){
        return b;
       }
       return a;
    }
    int maximum(int& a,int& b){
       if(a<b){
        return b;
       }
       return a;
    }
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        int i=k,j=k,mini=nums[k];
        int ans=mini;
        while(i>0||j<n-1){
            if(i==0){
                j++;
                mini=minimum(mini,nums[j]);
            }else if(j==n-1){
                i--;
                mini=minimum(mini,nums[i]);
            }else if(nums[i-1]>nums[j+1]){
                i--;
                mini=minimum(mini,nums[i]);
            }else{
                j++;
                mini=minimum(mini,nums[j]);
            }
            int score=mini*(j-i+1);
            ans=maximum(ans,score);
        }
        return ans;
    }
};