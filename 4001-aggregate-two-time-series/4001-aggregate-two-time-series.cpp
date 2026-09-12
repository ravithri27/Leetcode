class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        vector<vector<int>> ans;
        int n1=series1.size(),n2=series2.size();
        int i=0,j=0,sum=0;
        while(i<n1&&j<n2){
            if(series1[i][0]<series2[j][0]){
                sum=series1[i][1]+series2[j][1];
                ans.push_back({series1[i][0],sum});
                i++;
            }else if(series1[i][0]>series2[j][0]){
                sum=series1[i][1]+series2[j][1];
                ans.push_back({series2[j][0],sum});
                j++;
            }else{
                sum=series1[i][1]+series2[j][1];
                ans.push_back({series2[j][0],sum});
                i++;
                j++;
            }
        }
        while(i<n1){
            ans.push_back({series1[i][0],series1[i][1]});
            i++;
        }
        while(j<n2){
            ans.push_back({series2[j][0],series2[j][1]});
            j++;
        }
        return ans;
    }
};