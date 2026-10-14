class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int i=0,j=0,c=0;
        unordered_map<int,int>map;
        while(j<n){
            map[s[j]]++;
            while(map['a']>=1 && map['b']>=1 && map['c']>=1){
                c+=(n-j);
                map[s[i]]--;
                i++;
            }
            j++;
        }
        return c;
    }
};