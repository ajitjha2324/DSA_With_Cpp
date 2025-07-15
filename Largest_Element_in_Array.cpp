#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n)
{

    int max = arr[0]; // Taking First Element as a Largest

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i]) // if max less than current element
        {
            max = arr[i]; // assign that element to max
        }
    }
    return max;
}

int main()
{
    int arr1[] = {5, 7, 9, 1, 15, 11};
    int n = sizeof(arr1) / sizeof(arr1[0]); // Formula for Finding Size of Array  (4*5)/4 = 5
                                            // Sizeof(arr1) = 4 byte (siezofint) * 5 (Number of Element) /  4 sizeof(arr[0])
    int max = findLargestElement(arr1, n);
    cout << "The largest element in the array is: " << max;
}