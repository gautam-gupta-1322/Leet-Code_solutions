class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        int x = s.length();
        for(int i=0;i<x-1;i++)
        {
            while(s[i]==' '&&i<x)
            {
                i++;
            }
            j=i;
            while(s[j]!=' '&&j<x)
            {
                j++;
            }
            int temp = j--;
            while(i<j)
            {
                char z = s[i];
                s[i]=s[j];
                s[j]=z;
                i++;
                j--;
            }
            i=temp;
        }
        return s;
    }
};