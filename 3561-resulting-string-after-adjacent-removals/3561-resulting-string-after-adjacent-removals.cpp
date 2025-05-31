class Solution {
public:
    string resultingString(string s) {
        string stack;
        for(char c:s){
            if(stack.empty()==false){
                char last=stack.back();
                if(abs(last-c)==1 || abs(last-c)==25){ //last-c=1 for ab type....last-c=225 for za type
                 stack.pop_back();
                 continue;
                }
            }
            stack.push_back(c);
        }
        return stack;
    }
};