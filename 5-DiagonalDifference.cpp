/** Given a square matrix, calculate the absolute difference between the sums of its diagonals. */

#include <vector>
#include <assert.h>
#include <iostream>

using std::cout;
using std::vector;

int diagonalDifference(vector<vector<int>> arr)
{

    int left_to_right_diag_sum{0}, right_to_left_diag_sum{0};

    int rc = arr.size();

    for (int r = 0, c = rc - 1; r < rc; ++r, --c)
    {
        right_to_left_diag_sum += arr[r][c];
        left_to_right_diag_sum += arr[r][r];
    }
    return abs(left_to_right_diag_sum - right_to_left_diag_sum);
}

int main()
{
    vector<vector<int>> vec = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };
    assert(15 == diagonalDifference(vec));
  //  cout << "Diagonal Difference: " << diagonalDifference(vec) << '\n';
    // TODO: ADD MORE TESTS
    return 0;
}