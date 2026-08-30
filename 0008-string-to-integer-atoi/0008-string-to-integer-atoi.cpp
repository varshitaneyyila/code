class Solution {
public:
    int myAtoi(string s) {
        if(s.empty()) return 0;
        int i=0;
        int n=s.length();
        long long res=0;
        while(i<n && s[i]==' '){
            i++;
        }
        int sign=+1;
        if(i<n && s[i]=='+'){
            i++;
        }
        else if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        }
 while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            res = res * 10 + digit;
            
            if (sign * res <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * res >= INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        }
        return (int)(sign*res);
    }
};