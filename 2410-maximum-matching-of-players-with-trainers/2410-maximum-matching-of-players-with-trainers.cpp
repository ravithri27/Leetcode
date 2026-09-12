class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int n1=players.size(),n2=trainers.size();
        int i=0,j=0,maxi=0;
        while(i<n1&&j<n2){
            if(trainers[j]>=players[i]){
                maxi++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return maxi;
    }
};