void rotate(int *nums, int n, int k)
{
    int ans[n];
    if (k == 0 || n == 0 || n == 1)
        return;
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        ans[k] = nums[i];
        k = (k + 1) % n;
    }
    for (int i = 0; i < n; i++)
    {
        nums[i] = ans[i];
    }
}