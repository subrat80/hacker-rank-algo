#include <vector>
#include <numeric>
#include <iostream>
#include <assert.h>

using std::cout;
using std::vector;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    
    std::vector<int> result{0,0};
    result.reserve(2);
    for( int i = 0; i < a.size(); ++i) {
        if(a[i] == b[i]) {
            continue;
        } else if(a[i] > b[i]) {
            ++result[0];
        } else if(a[i] < b[i]) {
            ++result[1];
        }
    }
    
    return result;

}

int main() {
    // Inputs- Try to change and test
    std::vector<int> vec1{5, 6,7};
    std::vector<int> vec2{3, 6, 10};

    std::vector<int> expectedVec{1,1}; // Expected output - Try to modify if modifying inputs
    assert(compareTriplets(vec1, vec2)== expectedVec);
    std::cout << compareTriplets(vec1, vec2)[0] << " " << compareTriplets(vec1, vec2)[1] << std::endl;
    
}