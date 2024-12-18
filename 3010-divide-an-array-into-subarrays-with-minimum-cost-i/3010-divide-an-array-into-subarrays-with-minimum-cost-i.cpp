class Solution {
public:
    int minimumCost(vector<int>& num) {
        int ans=0;
        ans+=num[0];
        int a=*min_element(num.begin()+1,num.end());
        int b=INT_MAX,x=-1;
        ans+=a;
        for(int i=1;i<num.size();i++){
            if(num[i]==a){
                x=i;
                break;
            }
        }
        for(int i=1;i<num.size();i++){
            if(num[i]<b && i!=x){
                b=num[i];
            }
        }
        ans+=b;
        return ans;
    }
};