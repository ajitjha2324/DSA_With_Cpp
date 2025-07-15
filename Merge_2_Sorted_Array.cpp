#include <iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m)
{
    int idx = m + n - 1; // Last Index of Merge Array
    int i = n - 1;       // Last Element of Valid Element in arr1
    int j = m - 1;       // Last Index of arr2

    while (i >= 0 && j >= 0)
    {
        if (arr1[i] >= arr2[j])
        {
            arr1[idx] = arr1[i];
            idx--;
            i--;
        }
        else
        {
            arr1[idx] = arr2[j];
            idx--;
            j--;
        }
    }
    while (j >= 0)
    {
        arr1[idx] = arr2[j];
        idx--;
        j--;
    }
}

int main()
{
    int arr1[] = {4, 5, 6, 0, 0, 0};
    int arr2[] = {1, 2, 3};
    int n = 3;
    int m = sizeof(arr2) / sizeof(arr2[0]);
    mergeArray(arr1, n, arr2, m);
    for (int i = 0; i < m + n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}