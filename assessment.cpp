#include <bits/stdc++.h>
using namespace std;

int SumOfArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void compareTriplets(int A[], int B[], int score[])
{
    score[0] = 0;
    score[1] = 0;

    for (int i = 0; i < 3; i++)
    {
        if (A[i] > B[i])
            score[0]++;
        else if (B[i] > A[i])
            score[1]++;
    }
}

int diagonalDifference(int mat[3][3])
{
    int primary = 0, secondary = 0;

    for (int i = 0; i < 3; i++)
    {
        primary += mat[i][i];
        secondary += mat[i][2 - i];
    }

    return abs(primary - secondary);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum of Array = " << SumOfArr(arr, 5) << endl;

    int A[3] = {5, 6, 7};
    int B[3] = {3, 6, 10};
    int score[2] = {0, 0};

    compareTriplets(A, B, score);
    cout << "Compare the Triplets =  A Score: " << score[0] << ", B Score: " << score[1] << endl;

    int matrix[3][3] = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};

    cout << "Diagonal Difference = " << diagonalDifference(matrix) << endl;

    return 0;
}
