class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1,count=0;
        while(i<j){
            while(i<j&&nums[i]!=0){
                i++;
            }
            while(i<j&&nums[j]==0){
                j--;
            }
            if(i<j){
                count++;
                i++;
                j--;
            }
        }
        return count;
    }
};