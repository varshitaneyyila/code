int rob(int* nums, int numsSize) {
    int dp[numsSize];
    if(numsSize==1) return nums[0];
    dp[0]=nums[0];
    dp[1]=(nums[0]>nums[1])?nums[0]:nums[1];
    for(int i=2;i<numsSize;i++){
        int include=nums[i]+dp[i-2];
        int exclude=dp[i-1];
        dp[i]=include>exclude?include:exclude;
    }
    return dp[numsSize-1];

}