class Solution{
public:
    int countBinarySubstrings(string s) {
        int ans=0,prev=0,currgrp=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) currgrp++;
            else{
                ans+=min(prev,currgrp);
                prev=currgrp;
                currgrp=1;
            }
        }
        ans+=min(prev,currgrp);
        return ans;
    }
};