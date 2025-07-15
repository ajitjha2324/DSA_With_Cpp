#include <iostream>
using namespace std;

int rotateArray(int arr[])
{
    int n = arr.size();
    int i = arr[0];
    int j = arr[n - 1];
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << rotateArray(arr);
}