class MyCalendar {
public:
    MyCalendar() {
    }
    vector<pair<int,int>>booking;
    bool book(int s, int e) {
        for(auto a:booking){
            if(s<a.second &&  e>a.first) return false;
        }
        booking.push_back({s,e});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * c
 * bool param_1 = obj->book(startTime,endTime);
 */