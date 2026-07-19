class Solution {
public:
    string removeOuterParentheses(string s) {
        string re;
        int bal=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(bal>0){
                    re+=s[i];
                }
                bal++;
            }else{
                bal--;
                if(bal>0){
                    re+=s[i];
                }
            }
        }
        return re;
    }
};