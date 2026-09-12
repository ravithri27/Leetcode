class Solution {
public:
    int mini(int& a,int& b){
    if(a<b){
        return a;
    }
    return b;
    }
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int minimum=mini(height[i],height[j]);
        int maxarea=(j-i)*minimum;
        while(i<j){
            if(minimum==height[i]){
                i++;
            }
            if(minimum==height[j]){
                j--;
            }
            minimum=mini(height[i],height[j]);
            if(maxarea<(j-i)*minimum){
                maxarea=(j-i)*minimum;
            }
        }
        return maxarea;
    }
};