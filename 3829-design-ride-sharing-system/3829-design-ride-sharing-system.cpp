class RideSharingSystem {
public:
    queue<int> rider,driver;
    unordered_set<int> active;
    RideSharingSystem() {}
    
    void addRider(int riderId) {
        rider.push(riderId);
        active.insert(riderId);
    }
    
    void addDriver(int driverId) {
        driver.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        while(!rider.empty()&&active.find(rider.front())==active.end()){
            rider.pop();
        }
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
        active.erase(riderId);
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