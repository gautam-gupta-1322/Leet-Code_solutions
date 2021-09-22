int search(int *nums, int numsSize, int target)
{
    int s = 0, f = numsSize - 1;
    while (s <= f)
    {
        int mid = (s + f) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
        {
            f = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}