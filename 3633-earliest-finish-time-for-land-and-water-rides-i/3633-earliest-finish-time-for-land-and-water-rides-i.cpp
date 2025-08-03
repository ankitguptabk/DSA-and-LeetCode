class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans=INT_MAX;
        for (int i = 0; i <landStartTime.size(); i++) {
            for (int j = 0; j<waterStartTime.size(); j++) {
                int landStart = landStartTime[i];
                int landEnd = landStart + landDuration[i];
                int waterStart = max(landEnd, waterStartTime[j]);
                int totalTime1 = waterStart + waterDuration[j];

                int waterStart2 = waterStartTime[j];
                int waterEnd = waterStart2 + waterDuration[j];
                int landStart2 = max(waterEnd, landStartTime[i]);
                int totalTime2 = landStart2 + landDuration[i];

                ans = min(ans, min(totalTime1, totalTime2));
            }
        }
        return ans;
    }
};
