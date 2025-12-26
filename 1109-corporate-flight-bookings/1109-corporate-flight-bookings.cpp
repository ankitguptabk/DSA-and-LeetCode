class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int sz =bookings.size();
        vector<int>ans;
        vector<int>booked(n,0);
        for(int i=0;i<sz;i++){
            int first=bookings[i][0];
            int last=bookings[i][1];
            int seats=bookings[i][2];
            int  j=first-1;
            while(j<last){
                booked[j]+=seats;
                j++;
            }
        }
        return booked;
    }
};