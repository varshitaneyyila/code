class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n= nums.size();
        vector<int>nums2(n,0);
        for(int j=0;j<n;j++){
            if(nums[j]!=0) {
                nums2[i]=nums[j];
                i++;
            
        }
    }
    nums=nums2;
    }
};