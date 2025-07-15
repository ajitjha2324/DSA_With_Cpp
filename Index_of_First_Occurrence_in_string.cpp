#include <iostream>
#include <vector>
using namespace std;

void lpsfind(vector<int> &lps, string needle)
{
    int prefix = 0, suffix = 1;
    while (suffix < needle.size())
    {
        if (needle[prefix] == needle[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++;
            suffix++;
        }
        else
        {
            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }
}

int firstOccurrence(string haystack, string needle)
{
    int n = haystack.size(), m = needle.size();
    vector<int> lps(needle.size(), 0);
    lpsfind(lps, needle);
    int first = 0, second = 0;
    while (first < n && second < m)
    {
        // if Char Matched
        if (haystack[first] == needle[second])
        {
            first++, second++;
        }
        // if Not Mached
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[first - 1];
            }
        }
    }
    if (second == needle.size())
    {
        return first - second;
    }
    return -1;
}

int main()
{
    string haystack = "leetcode", needle = "code";
    cout << firstOccurrence(haystack, needle);
}