class Solution {
public:
    long long minCost(string s, vector<int>& c) {
        long long sum=0;
        unordered_map<char,long long>map;
        for(int i=0;i<s.size();i++){
            map[s[i]]+=(long long)c[i];
            sum+=c[i];
        }
        long long mini=sum;
        long long answer=sum;
        for(auto const &p:map){
            mini=min(mini,(mini-p.second));
            answer=min(answer,mini);
            mini=sum;
        }
        return answer;
    }
};