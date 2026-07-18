class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hours = 0;

            for (int bananas : piles) {
                hours += (bananas + mid - 1) / mid; // ceil(bananas / mid)
            }

            if (hours <= h) {
                ans = mid;
                high = mid - 1;   // Try a smaller speed
            } else {
                low = mid + 1;    // Need a larger speed
            }
        }

        return ans;
    }
};