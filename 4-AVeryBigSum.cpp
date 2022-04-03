#include <vector>
#include <numeric>

#include <iostream>

#include <assert.h>

using std::vector;
using std::cout;

long aVeryBigSum(vector<long> ar) {
    
    return std::accumulate(ar.begin(), ar.end(), 0L); // numeric

}

int main() {

    vector<long> arr{1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    assert(5000000015 == aVeryBigSum(arr));
    cout << aVeryBigSum(arr) << '\n';

// TODO: ADD MORE TESTS
    return 0;
}