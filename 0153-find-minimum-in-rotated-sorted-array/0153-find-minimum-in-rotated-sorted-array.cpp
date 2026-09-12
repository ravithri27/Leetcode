class Solution {
public:
    int mini(int a,int b){
        if(a<b){
            return a;
        }
        return b;
    }
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1,min=INT_MAX;
        while(l<=h){
            if(nums[l]<=nums[h]){
                min=mini(min,nums[l]);
                break;
            }
            int mid=(l+h)/2;
            if(nums[l]<=nums[mid]){
                min=mini(min,nums[l]);
                l=mid+1;
            }else{
                min=mini(min,nums[mid]);
                h=mid-1;
            }
        }
        return min;
    }
};