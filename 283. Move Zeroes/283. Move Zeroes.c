void moveZeroes(int* nums, int numsSize)
{
    int i = 0;
    int j = 0;
    
    while (j < numsSize) 
    {
        if (nums[j] != 0) 
        {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    while (i < numsSize) 
    {
        nums[i] = 0;
        i++;
    }
}