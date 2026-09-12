class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        int ele=nums[0];
        int ans=nums[0],cnt=0,cnt1=0;
        for(int i=1;i<n;i++){
            if(ele==nums[i]){
                cnt1++;
                if(cnt1>cnt){
                    cnt=cnt1;
                    ans=nums[i];
                }
            }else{
                cnt1=1;
                ele=nums[i];
            }
        }
        return ans;
    }
}