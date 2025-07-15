#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int painterCount = 1;
    int sumOfWall = 0;
    for (int i = 0; i < n; i++)
    {
        if (sumOfWall + arr[i] <= mid)
        {
            sumOfWall += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }
            sumOfWall = arr[i];
        }
    }
    return true;
}

int painterPartition(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {40, 30, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    cout << "MInimum time taken is: " << painterPartition(arr, n, m);
}