class Solution {
public:
    string numberToWords(int n) {
        if(n==0) return "Zero";
        vector<string> below20={
            "","One","Two", "Three", "Four", "Five", "Six", "Seven","Eight", "Nine", "Ten", "Eleven",
             "Twelve", "Thirteen","Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen","Nineteen"
        };
        vector<string> tens ={"","", "Twenty", "Thirty", "Forty", "Fifty", "Sixty",
                               "Seventy", "Eighty", "Ninety"
        };
        vector<string>thousands= {"", "Thousand", "Million", "Billion"};

        string ans="";
        int i=0;
        while(n>0){
            int part=n%1000;
            if(part!=0){
                string chunk="";
                int hundred=part/100;
                int rest=part%100;
                if(hundred>0){
                    chunk+=below20[hundred] +" Hundred";
                    if(rest) chunk+=" ";
                }
                if(rest<20){
                    chunk+=below20[rest];
                }
                else{
                    chunk+=tens[rest/10];
                    if(rest%10){
                        chunk+=" "+below20[rest%10];
                    }
                }
                if(!thousands[i].empty()) chunk+=" "+thousands[i];
                if(!ans.empty() ) ans=chunk+" " +ans;
                else{
                    ans=chunk;
                }
            }
            n/=1000;
            i++;
        }
        return ans;
    }
};