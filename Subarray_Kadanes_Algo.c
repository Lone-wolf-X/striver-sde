/*"KADANE'S ALGORITHM"*/

#include<stdio.h>
int maxSubArray(int* nums, int numsSize){
int maxsum=-10000 , cursum=0;
for(int i=0; i<numsSize; i++)
{
    cursum = cursum + nums[i];
    if(cursum >maxsum)
    maxsum = cursum;
    if(cursum < 0)
    cursum = 0; 
}
return maxsum;
}
int main()
{
    int nums[7] = {-1 ,5,-4,7,8,10,6};
    int numsSize = 7;
    printf("%d",maxSubArray(nums,numsSize));
}