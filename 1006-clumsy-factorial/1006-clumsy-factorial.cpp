class Solution {
public:
    int clumsy(int n) {
        stack<int>s;
        s.push(n);
        n--;
        int i=0;
        while(n>0){
            if(i%4==0){
                int top=s.top();
                s.pop();
                s.push(top*n);
            }
            else if(i%4==1){
                int top=s.top();
                s.pop();
                s.push(top/n);
            }
            else if(i%4==2){
                s.push(n);
            }
            else if(i%4==3){
                s.push(-n);
            }
            n--;
            i++;
        }
        int ans=0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};
