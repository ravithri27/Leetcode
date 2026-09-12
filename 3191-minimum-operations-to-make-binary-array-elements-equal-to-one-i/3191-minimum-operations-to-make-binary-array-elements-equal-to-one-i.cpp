class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        bool check;
        int i=0;
        int n=nums.size();
        while(i<n-2){
            while(i<n-2&&nums[i]==1){
                i++;
            }
            if(i>=n-2){
                break;
            }
            cnt++;
            for(int j=i;j<i+3;j++){
                if(nums[j]==1){
                    nums[j]=0;
                }else{
                    nums[j]=1;
                }
            }
            
        }
        check=true;
        for(int i=0;i<n;i++){
            if(nums[i]!=1){
                check=false;
                break;
            }
        }
    if(!(check)){
        return -1;
    }
    return cnt;
    }
};