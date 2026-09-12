class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n=drones.size();
        int ans=INT_MAX,index=-1,dist=-1;
        for(int i=0;i<n;i++){
            dist=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(dist>drones[i][2]){
                continue;
            }
            if(ans>dist){
                ans=dist;
                index=i;
            }
        }
        return index;
    }
};