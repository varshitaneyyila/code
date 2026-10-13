class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int r = 0;
        int n = fruits.size();
        int maxi = 0;

        unordered_map<int, int> f;

        while (r < n) {
            f[fruits[r]]++;

            while (f.size() > 2) {
                f[fruits[l]]--;

                if (f[fruits[l]] == 0) {
                    f.erase(fruits[l]);
                }

                l++;
            }

            maxi = max(maxi, r - l + 1);
            r++;
        }

        return maxi;
    }
};