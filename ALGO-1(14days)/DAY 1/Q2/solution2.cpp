int firstBadVersion(int n)
{
    unsigned int s = 1, f = n;
    unsigned int mid = (s + f) / 2;
    while (s <= f)
    {
        if (isBadVersion(mid) == true)
        {
            if (isBadVersion(mid - 1) == false)
                return mid;
            else
                f = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + f) / 2;
    }
    return 0;
}