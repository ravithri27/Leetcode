class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        int[] ans=new int[n];
        int k=1,cnt=0;
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
            if(ans[k-1]==nums[i]){
                if(cnt<1){
                    ans[k]=nums[i];
                    k++;
                    cnt++;
                }
            }else{
                ans[k]=nums[i];
                k++;
                cnt=0;
            }
        }
        for(int i=0;i<k;i++){
            nums[i]=ans[i];
        }
        return k;
    }
}