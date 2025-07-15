#include <iostream>
using namespace std;

bool checkPalindrome(string str)
{
    int n = str.size();
    int start = 0;
    int end = n;
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        if (str[start] == str[end])
        {
            start++;
            end--;
        }
        return true;
    }
}

int main()
{
    string str = "a6b717b6a";
    cout << checkPalindrome(str);
}