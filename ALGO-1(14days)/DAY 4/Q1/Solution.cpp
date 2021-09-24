class Solution {
public:
    void reverseString(vector<char>& s) {
        int x= s.size();
        int j=x-1;
        for(int i=0;i<j;i++)
        {
            char r = s[i];
            s[i]=s[j];
            s[j] = r;
            j--;
        }
    }
};