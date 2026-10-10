class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int total=0;
        int lm=0,rm=0;
        int i=0,j=n-1;
        while(i<j){
            if(lm<height[i]){
                lm=height[i];
            }
            if(rm<height[j]){
                rm=height[j];
            }
            if(lm<rm){
                total+=lm-height[i];
                i++;
            }else{
                total+=rm-height[j];
                j--;
            }
        }
        return total;
    }
};