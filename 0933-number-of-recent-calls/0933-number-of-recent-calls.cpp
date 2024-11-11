class RecentCounter {
    vector<int>rec;
    int c;
public:
    RecentCounter() {
        c=0;
    }
    
    int ping(int t) {
        rec.push_back(t);
        while(rec[c]<t-3000) c++;
        return rec.size()-c;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */