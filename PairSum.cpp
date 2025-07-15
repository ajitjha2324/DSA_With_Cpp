#include <iostream>
#include <vector>
using namespace std;
// int main()
//  {
//      vector<int> nums = {1, 2, 3, 4, 5};
//      vector<int> ans;
//      int target = 9;
//      for (int i = 0; i < nums.size(); i++)
//      {
//          for (int j = i + 1; j < nums.size(); j++)
//          {
//              if (nums[i] + nums[j] == target)
//              {
//                  ans.push_back(i);
//                  ans.push_back(j);
//                  return ans;
//              }
//          }
//      }
//  }

// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 6;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 cout << "First Index is " << i << endl;
//                 cout << "Second Index is " << j << endl;
//             }
//         }
//     }
// }

// USING FUNCTION
//  TIME COMPLEXITY - O(n^2)
/*
vector<int> pairSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main()
{
    vector<int> nums = {2, 3, 5, 7, 9};
    int target = 14;
    vector<int> ans = pairSum(nums, target);
    if (!ans.empty()) // Check if a pair was found
        cout << ans[0] << ", " << ans[1] << endl;
    else
        cout << "No valid pair found." << endl;
}
*/

// OPTIMAL SOLUTION   TC - O(n)

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
}
