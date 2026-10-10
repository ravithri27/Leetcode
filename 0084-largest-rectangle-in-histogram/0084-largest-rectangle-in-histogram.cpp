class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxi=-1;
        stack<int> st;
        for(int i=0;i<n;i++){
            int height;
            while(!st.empty()&&heights[st.top()]>heights[i]){
                height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width=i;
                }else{
                    width=i-st.top()-1;
                }
                int area=height*width;
                if(maxi<area){
                    maxi=area;
                }
            }
            st.push(i);
        }

        while(!st.empty()){
            int height=heights[st.top()];
            st.pop();
            int width;
            if(st.empty()){
                width=n;
            }else{
                width=n-st.top()-1;
            }
            int area=height*width;
            if(maxi<area){
                maxi=area;
            }
        }
        return maxi;
    }
};