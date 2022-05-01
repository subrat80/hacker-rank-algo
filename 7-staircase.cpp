#include <iostream>

void staircase(int n) {
    for(int r = 1; r <= n; ++r) {
        // Print Spaces => (n-r) times
        for(int ns = 0; ns < (n-r); ++ns) {

            std::cout << ' ';
        }

        // Print #, r times

        for(int np = 1; np <= r; ++np) {

            std::cout << '#';
        }

        // Go to newline
        std::cout << '\n';

    }   
}

// Prepare|Algorithms|Warmup|Staircase

int main() {
    int n{4};
    std::cout << "For n = " << n << '\n';
    staircase(n);
    
    n = 5;
    std::cout << "\nFor n = " << n << '\n';
    staircase(n);

    n = 6;
    std::cout << "\nFor n = " << n << '\n';
    staircase(n);

    n = 7;
    std::cout << "\nFor n = " << n << '\n';
    staircase(n);

    return 0;
}