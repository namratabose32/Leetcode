class MyCalendar {
public:
    map<int,int> mp;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        //auto x=mp.lower_bound(start);
        auto x=mp.upper_bound(start);
        if(x!=mp.end() && (*x).second<end)
            return false;
        mp.insert({end,start});
        return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */