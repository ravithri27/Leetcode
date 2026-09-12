class Solution {
public:
    bool isEven(int n){
        int count=0;
        while(n>0){
            count+=1;
            n=n/10;
        }
        if(count%2==0) return true;
        else return false;
    }
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(isEven(nums[i])){
                c++;
            }
        }
        return c;
    }
};