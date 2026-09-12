class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        long long sumf=0,suml=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                sumf+=nums[i];
            }else{
                suml+=nums[i];
            }
        }
        if(sumf>suml){
            ans++;
        }
        int r=1,i=0,j=n/2-1,k=n/2,l=n-1;
        while(r<n){
            sumf-=nums[i%n];
            i++;
            j++;
            sumf+=nums[j%n];

            suml-=nums[k%n];
            k++;
            l++;
            suml+=nums[l%n];
            
            if(sumf>suml){
                ans++;
            }
            r++;
        }
        return ans;
    }
};