//Link - https://leetcode.com/problems/reverse-pairs/
//Solution -
class Solution {
    int count = 0;
public:
    void cal(vector<int>&arr,int i,int mid,int j)
    {
        int x = i;
        int y = mid+1;
        int c = 0;
        while(x<=mid&&y<=j)
        {
            if(arr[x]> (long long)2*arr[y])
            {
                c++;
                y++;
            }
            else
            {
                count = count +c;
                x++;
            }
        }
        if(x<=mid)
        {
            count = count + ((mid-x+1)*c);
        }
    }
    void sort(vector<int>&nums,int i,int mid,int j)
    {
        int x = i;
        int y = mid+1;
        vector<int> yes;
        int k=0;
        while(x<=mid&&y<=j)
        {
            if(nums[x]>nums[y])
            {
                 yes.push_back(nums[y++]);
            }
            else
            {
                 yes.push_back(nums[x++]);
            }
        }
        while(x<=mid)
        {
            yes.push_back(nums[x++]);
        }
        while(y<=j)
        {
            yes.push_back(nums[y++]);
        }
        k=0;
        for(int l=i;l<=j;l++)
        {
            nums[l]=yes[k++];
        }
    }
    void merge(vector<int>&nums , int i,int j)
    {
        
        int mid = (i+j)/2;
        if(i<j)
        {
            merge(nums,i,mid);
            merge(nums,mid+1,j);
            cal(nums,i,mid,j);
            sort(nums,i,mid,j);
            
        }
    }
    int reversePairs(vector<int>& nums) {
        if(nums.empty())
            return 0;
        merge(nums,0,int(nums.size()-1));
        return count;
    }
};