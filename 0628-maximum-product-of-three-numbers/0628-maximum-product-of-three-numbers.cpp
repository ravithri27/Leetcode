class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int n=nums.size();
        int product=1;
        int i=0;
        while(i<n-1){
            int k=i+1,j=n-1;
            while(k<j){
                product=nums[i]*nums[j]*nums[k];
                if(ans<product){
                    ans=product;
                }
                k++;
                j--;
            }
            i++;
        }
        return ans;
    }
};