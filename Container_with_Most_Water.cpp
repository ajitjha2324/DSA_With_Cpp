#include <iostream>
#include <vector>
using namespace std;

// BRUTE FORCE
/*
int high_capacity(vector<int> &height)
{
    int maxWater = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int width = j - i;
            int hei = min(height[i], height[j]);
            int currWater = width * hei;
            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main()
{
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << high_capacity(height);
}
*/

// OPTIMAL APPROACH
int high_capacity(vector<int> &height)
{
    int lp = 0;
    int rp = height.size() - 1;
    int maxWater = 0;
    while (lp < rp)
    {
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = width * ht;
        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main()
{
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << high_capacity(height);
}