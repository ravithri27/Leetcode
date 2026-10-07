class Solution {
public:
    int BinarySearch(int low,int high,vector<int>& nums,int tar){
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==tar){
                return mid;
            }else if(nums[mid]>tar){
                return BinarySearch(low,mid-1,nums,tar);
            }else{
                return BinarySearch(mid+1,high,nums,tar);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==target)
                return 0;
            return -1;
        }
        int k=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                k=i+1;
                break;
            }
        }
        int index=-1;
        if(k==0){
            index=BinarySearch(0,n-1,nums,target);
            return index;
        }
        index=BinarySearch(0,k-1,nums,target);
        if(index==-1)
            index=BinarySearch(k,n-1,nums,target);
        return index;
    }
};