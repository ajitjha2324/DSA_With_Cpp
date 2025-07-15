// SUBARRAY is a Continuous part of any array
// IT Could be 1,2,3,4 or equal to Number of Element in Array
// Eg - arr[1,2,3] -> Subarray will be 1,2,3,12,23,123

#include <iostream>
#include <vector>
using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[] = {1, 2, 3, 3, 4};
//     for (int st = 0; st < n; st++)
//     {
//         for (int end = st; end < n; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// BRUTE FORCE
// TIME _ COMPLEXITY - O(n^2)
/*
int main()
{
    int n = 5;
    int arr[] = {1, -2, 4, -1, 6};
    int maxSum = INT16_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max Subarray Sum = " << maxSum;
    return 0;
}
*/

// KADANE'S ALGORITHM (FOR OPTIMAL SOLUTION)
int maxSubArray(vector<int> &nums)
{
    int currSum = 0;
    int maxSum = INT16_MIN;
    for (int val : nums)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
    }
    if (currSum < 0)
    {
        currSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> nums{-1, -2, 3, -2, 5, 2};
    cout << "Maximum Subarray Sum is " << maxSubArray(nums);
}