class MyCalendar {
public:
    MyCalendar() {
    }
    vector<pair<int,int>> p;
    bool book(int start, int end) {
        for (auto i: p){
            if(i.second>start && i.first<end) return false;
          
        }   p.push_back({start,end});
            return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */