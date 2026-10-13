class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int n=s.length();
        int maxlen=0;
        int left=0;
        unordered_set<char>st;
    for(int right=0;right<n;right++){
        while(st.find(s[right])!=st.end()){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);    
        maxlen=max(maxlen,right-left+1);}
        return maxlen;
    }
};