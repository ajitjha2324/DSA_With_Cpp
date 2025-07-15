#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> vec, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    return vec[n - 1] >= vec[n - 2] && checkSorted(vec, n - 1);
}

int main()
{
    vector<int> vec = {1, 2, 9, 3, 4, 5};
    int n = vec.size();
    cout << checkSorted(vec, n);
}