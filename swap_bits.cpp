// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    string is(int n)
    {
        string s = "";
        for (int i = 31; i >= 0; i--)
        {
            int k = n >> i;
            if (k & 1)
            {
                s += '1';
            }
            else
            {
                s += '0';
            }
        }

        return s;
    }

    int binaryToDecimal(string s)
    {
        int n = s.size();
        int dec_val = 0;
        int base = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                dec_val += base;
            }
            base *= 2;
        }

        return dec_val;
    }

    int swapBits(int x, int p1, int p2, int n)
    {
        string s = is(x);
        reverse(s.begin(), s.end());

        int i = p1;
        int j = p2;
        while (n--)
        {
            swap(s[i], s[j]);
            i++;
            j++;
        }
        reverse(s.begin(), s.end());
        int ans = binaryToDecimal(s);

        return ans;
    }
};