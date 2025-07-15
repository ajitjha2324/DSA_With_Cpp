#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int N, int C, int mid)
{
    int cows = 1;
    int lastStallPos = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] - lastStallPos >= mid)
        {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == C)
        {
            return true;
        }
    }
    return false;
}

int getDistance(int arr[], int N, int C)
{
    sort(arr, arr + N);
    int start = 1;
    int end = arr[N - 1] - arr[0]; 
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, N, C, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 8, 4, 9};
    int N = 5, C = 3;
    cout << getDistance(arr, N, C);
}