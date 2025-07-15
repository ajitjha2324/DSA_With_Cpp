#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{2, 4, 2, 4, 1, 2, 3, 2, 2, 2};
    cout << "Majority Element Present in a Array is " << majorityElement(nums);
}