class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        int landMinEnd = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            int landEnd = landStartTime[i] + landDuration[i];
            landMinEnd = min(landMinEnd, landEnd);
        }

        for (int i = 0; i < waterStartTime.size(); i++) {
            int start = max(landMinEnd, waterStartTime[i]);
            int endTime = start + waterDuration[i];
            ans = min(ans, endTime);
        }

        int waterMinEnd = INT_MAX;
        for (int i = 0; i < waterStartTime.size(); i++) {
            int waterEnd = waterStartTime[i] + waterDuration[i];
            waterMinEnd = min(waterMinEnd, waterEnd);
        }

        for (int i = 0; i < landStartTime.size(); i++) {
            int start = max(waterMinEnd, landStartTime[i]);
            int endTime = start + landDuration[i];
            ans = min(ans, endTime);
        }

        return ans;
    }
};
