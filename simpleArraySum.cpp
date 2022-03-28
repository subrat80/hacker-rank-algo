#include <vector>
#include <numeric>
#include <iostream>
#include <assert.h>

using std::cout;
using std::vector;

int simpleArraySum(vector<int> ar) {

    return std::accumulate(ar.begin(), ar.end(), 0);

}


int simpleArraySum_Impl2(vector<int> ar) {
    int sum{0};
    for(auto& item : ar) {
      sum += item;
    }
    return sum;
}

int main() {
    std::vector<int> vec{1,2,3,4,5};
    assert(simpleArraySum(vec)==15);
    std::cout << simpleArraySum_Impl2(vec) << std::endl;
    std::cout << simpleArraySum_Impl2({10,20,30,40,50}) << std::endl;
    
}