class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int total=0;
        vector<int> lm(n),rm(n);
        lm[0]=height[0];
        rm[n-1]=height[n-1];
        for(int k=1;k<n;k++){
            if(lm[k-1]>height[k]){
                lm[k]=lm[k-1];
            }else{
                lm[k]=height[k];
            }
        }
        for(int k=n-2;k>=0;k--){
            if(rm[k+1]>height[k]){
                rm[k]=rm[k+1];
            }else{
                rm[k]=height[k];
            }
        }
        for(int i=0;i<n;i++){
            if(lm[i]<rm[i]){
                total+=lm[i]-height[i];
            }else{
                total+=rm[i]-height[i];
            }
        }
        return total;
    }
};