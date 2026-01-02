class Solution {
public:
    int minimumPushes(string word) {
       int ans=0;
       int n=word.size();
       unordered_map<char,int>m;
       for(char w:word) {
        m[w]++;
       }
       vector<int>freq;
       for(auto const &p:m){
        freq.push_back(p.second);
       }
       sort(freq.begin(),freq.end(),greater<int>());
       int c=0,i=1;
       for(int f:freq){
        ans+=(i*f);
        c++;
        if(c%8==0){
            i++;
        }
       }
       return ans;
    }
};