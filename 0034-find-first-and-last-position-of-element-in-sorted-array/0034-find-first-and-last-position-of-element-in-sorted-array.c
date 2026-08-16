/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int l=0;
    int r=numsSize-1;
    int *ans = malloc(2 * sizeof(int));
    ans[0] = -1;
    ans[1] = -1;
    *returnSize=2;
    while(l<=r){
        int m=(l+r)/2;
        if(target<nums[m]){
            r=m-1;
        }else if(target>nums[m]){
            l=m+1;
        }else{
            ans[0]=m;
            r=m-1;
        }
    }
    l = 0;
    r = numsSize - 1;
   while(l<=r){
    int m=(l+r)/2;
    if(target<nums[m]){
        r=m-1;

    }else if(target>nums[m]){
        l=m+1;
    }else{
        ans[1]=m;
        l=m+1;
    }
   }
   return ans;
   

}