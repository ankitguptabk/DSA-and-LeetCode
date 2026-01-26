class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int n=queries.size(), m=words.size();
        vector<int>freq, freqw;
        for(int i=0;i<m;i++){
            string w=words[i];
            sort(w.begin(), w.end());
            char ch=w[0];
            int count=0;
            for(int j=0;j<w.size();j++){
                if(w[j]==ch) count++;
                else{
                    break;
                }
            }
            freqw.push_back(count);
        }
        for(int i=0;i<n;i++){
            string w=queries[i];
            sort(w.begin(), w.end());
            char ch=w[0];
            int count=0;
            for(int j=0;j<w.size();j++){
                if(w[j]==ch) count++;
                else{
                    break;
                }
            }
            freq.push_back(count);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(freq[i]<freqw[j]) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};