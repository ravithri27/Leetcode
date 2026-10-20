class RideSharingSystem {
public:
    queue<int> rider,driver;
    RideSharingSystem() {}
    
    void addRider(int riderId) {
        rider.push(riderId);
    }
    
    void addDriver(int driverId) {
        driver.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        if(driver.empty()||rider.empty()){
            return {-1,-1};
        }
        int r=rider.front();
        rider.pop();
        int d=driver.front();
        driver.pop();
        return {d,r};
    }
    
    void cancelRider(int riderId) {
        int n=rider.size();
        for(int i=0;i<n;i++){
            int r=rider.front();
            rider.pop();
            if(r!=riderId){
                rider.push(r);
            }
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */