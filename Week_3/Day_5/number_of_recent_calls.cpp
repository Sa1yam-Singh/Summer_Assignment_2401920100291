class RecentCounter {
public:
    RecentCounter() {
        
    }
    queue<int> qt;
    
    int ping(int t) {
        qt.push(t);
        while(!qt.empty()&&qt.front()<(t-3000)){
            qt.pop();
        }
        return qt.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
