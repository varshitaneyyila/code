int maxSubArray(int* nums, int numsSize) {
    int curr=nums[0];
    int ans=nums[0];
    int l=0;
    int r=numsSize-1;
        for(int i=1;i<numsSize;i++){
            if(curr+nums[i]>nums[i]){
                curr+=nums[i];
            }else{
                curr=nums[i];
            }
            if(curr>ans){
                ans=curr;
            }
        }
    
    return ans;
}