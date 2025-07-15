#include <iostream>
using namespace std;

int getMaxSum(int matrix[3][3], int row, int col)
{
    int maxRowSum = INT_FAST16_MIN;
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < col; j++)
        {
            rowSum += matrix[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 55, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    cout << getMaxSum(matrix, row, col);
}