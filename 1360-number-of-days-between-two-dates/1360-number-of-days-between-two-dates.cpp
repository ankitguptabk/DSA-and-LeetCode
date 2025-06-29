class Solution {
public:
    int daysBetweenDates(string a, string b) {
        if(a > b) swap(a, b);

        int y1 = stoi(a.substr(0, 4)), m1 = stoi(a.substr(5, 2)), d1 = stoi(a.substr(8, 2));
        int y2 = stoi(b.substr(0, 4)), m2 = stoi(b.substr(5, 2)), d2 = stoi(b.substr(8, 2));

        int md[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

        auto leap = [&](int y) {
            return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
        };

        int ans = 0;
        for(int y = y1; y < y2; y++) ans += 365 + leap(y);

        for(int i = 1; i < m1; i++) ans -= md[i - 1] + (i == 2 && leap(y1));
        
        ans -= d1 - 1;

        for(int i = 1; i < m2; i++) ans += md[i - 1] + (i == 2 && leap(y2));
        
        ans += d2 - 1;
        return ans;
    }
};
