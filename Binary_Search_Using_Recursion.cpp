#include <iostream>
using namespace std;

// int searchElement(int arr[], int key, int start, int end)
//     {
//         if (start > end)
//             return -1;
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             return searchElement(arr, key, mid + 1, end);
//         }
//         else
//         {
//             return searchElement(arr, key, start, mid - 1);
//         }
//     }

// int main(){
//     int n;
//     cout << "Enter size of an array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " Elements in Sorted Order" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key = -1;
//     cout << "Enter Element to be searched" << endl;
//     cin >> key;
//     int index = searchElement(arr, key, 0, n - 1);
//     cout<< "Index " << index;
// }

int main()
{
    char Alphabet[26];
    for (int i = 0; i < 26; i++)
    {
        Alphabet[i] += 'a' + i;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << Alphabet[i] << " ";
    }
}