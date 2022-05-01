/** Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
 *  Print the decimal value of each fraction on a new line with  places after the decimal. *******/

#include <vector>
#include <assert.h>
#include <iostream>
#include <iomanip>

using std::cout;
using std::vector;

void plusMinus(vector<int> arr) {

    int pos_count{0}, neg_count{}, zero_count{};
    for(auto& item : arr) {
        if(item == 0) {
            ++zero_count;

        } else if(item > 0) {
            ++pos_count;
        } else {
            ++neg_count;
        }
    } 
float factor = 1.f/arr.size();

//    std::cout << std::fixed << std::setprecision(6)  << (float)pos_count/arr.size() << '\n' << (float)neg_count/arr.size() << '\n' << (float)zero_count/arr.size() << '\n';

printf("%.6f\n%.6f\n%.6f\n", pos_count * factor, neg_count * factor, zero_count * factor);

}

int main()
{
    vector<int> vec = {
        {11, 2, 4,
        4, 5, 6,
        10, 8, -12}
    };

    vector<int> vec2{-4, 3, -9, 0, 4, 1 };
    plusMinus(vec2);

     vector<int> vec3{1, 1, 0, -1, -1 };
    plusMinus(vec3);

    // TODO: ADD MORE TESTS
    return 0;
}