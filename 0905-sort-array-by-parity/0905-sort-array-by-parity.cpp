class Solution {
public:
    void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums;
        }
        int i=0,j=n-1;
        while(i<j){
            while(i<j&&nums[i]%2==0){
                i++;
            }
            while(i<j&&nums[j]%2!=0){
                j--;
            }
            if(i<j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};