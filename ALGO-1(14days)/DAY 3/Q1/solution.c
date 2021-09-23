void moveZeroes(int *nums, int n)
{
    int i = 0, j = 0;
    if (n == 0 || n == 1)
        return;
    for (i = 0; i < n - 1; i++)
    {
        if (nums[i] == 0)
        {
            j = i + 1;
            while (j < n && nums[j] == 0)
            {
                j++;
            }
            if (j == n)
                break;
            else
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}