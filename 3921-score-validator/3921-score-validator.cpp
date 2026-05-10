class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int c=0,s=0;
        for(int i=0;i<n;i++){
            if(events[i]>="1" && events[i]<="6"){
                s+=stoi(events[i]);
            }
            else if(events[i]=="W"){
                c++;
            }
            else if(events[i]=="WD" || events[i]=="NB"){
                s++;
            }
            if(c==10) break;
        }
        return {s,c};
    }
};