class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        double ans=0;
        long long waitTime=customers[0][1];
        long long last=customers[0][0]+customers[0][1];
        for(int i=1;i<n;i++){
            long long a=customers[i][0], b=customers[i][1];
            if(last<a) last=a;
            waitTime+=last-a+b;
            last+=b;
        }
        ans=static_cast<double>(waitTime)/static_cast<double>(n);
        return ans;
    }
};