int *sortedSquares(int *nums, int n, int *r)
{
    *r = n;
    int i = 0;
    int j = 0;
    int k = 0;
    int *arr;
    arr = (int *)malloc(sizeof(int) * n);
    if (nums[0] >= 0)
    {
        for (i = 0; i < n; i++)
        {
            arr[i] = nums[i] * nums[i];
        }
        return arr;
    }
    else if (nums[n - 1] <= 0)
    {
        j = n - 1;
        for (i = 0; i < n; i++)
        {
            arr[j--] = nums[i] * nums[i];
        }
        return arr;
    }
    else
    {
        while (nums[i] < 0 && (i < n))
        {
            i++;
        }
        j = i - 1;
        while ((j != -1) && i != n)
        {
            int l = nums[j] * nums[j];
            int r = nums[i] * nums[i];
            if (l > r)
            {
                arr[k++] = r;
                i++;
            }
            else
            {
                arr[k++] = l;
                j--;
            }
        }
        while (i != n)
        {
            arr[k++] = nums[i] * nums[i];
            i++;
        }
        while (j != -1)
        {
            arr[k++] = nums[j] * nums[j];
            j--;
        }
    }
    return arr;
}