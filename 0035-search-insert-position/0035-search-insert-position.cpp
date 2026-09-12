class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid,mid1;
        while(left<=right){
            mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }else if(target>nums[mid]){
                left=mid+1;
                mid1=mid+1;
            }else{
                right=mid-1;
                mid1=mid;
            }
        }
        return mid1;
    }
};