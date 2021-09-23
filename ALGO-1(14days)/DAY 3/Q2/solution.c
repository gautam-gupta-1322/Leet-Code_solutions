int *twoSum(int *numbers, int n, int target, int *returnSize)
{
    int *ans = (int *)malloc(sizeof(int) * 2);
    int i = 0;
    int j = n - 1;
    *returnSize = 2;
    int sum = INT_MAX;
    while (sum != target && (i < j))
    {
        sum = numbers[i] + numbers[j];
        if (sum == target)
        {
            ans[0] = i + 1;
            ans[1] = j + 1;
            return ans;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return ans;
}