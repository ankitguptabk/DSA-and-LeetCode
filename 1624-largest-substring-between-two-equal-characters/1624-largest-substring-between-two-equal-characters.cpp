class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        for(int i=0;i<s.size()-1;i++){
            int j=i+1;
            while(j<s.size()){
                if(s[j]==s[i]){
                    ans=max(ans,j-i-1);
                }
                j++;
            }
        }
        return ans;
    }
};