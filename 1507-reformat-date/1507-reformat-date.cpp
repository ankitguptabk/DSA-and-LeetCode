class Solution {
public:
    string reformatDate(string d) {
        string y="";
        y+=d.substr(d.size()-4,4);
        string dd="";
        string m="";
        if(isalpha(d[1])){
            dd="0"+string(1, d[0]);
            m=d.substr(4, 3);
        }
        else if(!isalpha(d[1])){
            dd=d.substr(0, 2);
            m=d.substr(5, 3);
        }
        unordered_map<string,string>map={
            {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
            {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
            {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
        };
        m=map[m];
        string ans=y+'-'+m+'-'+dd;
        return ans;
    }
};