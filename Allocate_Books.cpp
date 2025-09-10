#include <iostream>
using namespace std;

bool isPossible(int books[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + books[i] <= mid)
        {
            pageSum += books[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || books[i] > mid)
            {
                return false;
            }
            pageSum = books[i];
        }
    }
    return true;
}

int allocateBooks(int books[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += books[i];
    }
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(books, n, m, mid))
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
    int books[4] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;
    cout << "Maximum Book Allocate to Minimum is " << allocateBooks(books, n, m);
}