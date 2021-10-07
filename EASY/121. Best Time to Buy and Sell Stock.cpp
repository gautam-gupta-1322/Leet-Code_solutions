// Question Link --> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Solution -->
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        return merge(prices, 0, prices.size() - 1, 0);
    }
    int merging(vector<int> &prices, int i, int mid, int j)
    {
        int x = i;
        int y = mid + 1;
        int sum = 0;
        vector<int> sort;
        int m = prices[j] - prices[i];
        while (x <= mid && y <= j)
        {
            if (prices[x] > prices[y])
            {
                sort.push_back(prices[y]);
                y++;
            }
            else
            {
                sort.push_back(prices[x]);
                x++;
            }
        }
        while (x <= mid)
        {
            sort.push_back(prices[x]);
            x++;
        }
        while (y <= j)
        {
            sort.push_back(prices[y]);
            y++;
        }
        int k = 0;
        for (int q = i; q <= j; q++)
        {
            prices[q] = sort[k++];
        }
        return m;
    }
    int merge(vector<int> &prices, int i, int j, int sum)
    {
        int mid = (i + j) / 2;
        if (i < j)
        {
            sum = merge(prices, i, mid, sum);
            sum = merge(prices, mid + 1, j, sum);
            int z = merging(prices, i, mid, j);
            if (z > sum)
                sum = z;
        }
        return sum;
    }
};