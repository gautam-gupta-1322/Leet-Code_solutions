int searchInsert(int *nums, int numsSize, int target)
{
    unsigned int s = 0, f = numsSize - 1;
    unsigned int mid = (s + f) / 2;
    while (s <= f)
    {
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
        {
            if (mid == 0)
                return 0;
            f = mid - 1;
            if (nums[mid - 1] < target)
                return mid;
        }
        else if (nums[mid] < target)
        {
            if (mid == numsSize - 1)
                return numsSize;
            s = mid + 1;
            if (nums[mid + 1] > target)
                return mid + 1;
        }
        mid = (s + f) / 2;
    }
    return -1;
}