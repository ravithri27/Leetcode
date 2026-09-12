class Solution {
public:
    void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
    }
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int i=0,j=n-1;
        while(i<=j){
            if(nums[i]!=val){
                i++;
            }else if(nums[j]==val){
                j--;
            }else{
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return i;
    }
};