#include <iostream>

using namespace std;

int main() {
    // Initialize the first two terms of the sequence
    int term1 = 1;
    int term2 = 2;

    // Output the first two terms
    cout << term1 << ", " << term2;

    // Continue the Fibonacci sequence until the sum exceeds 4,000,000
    while (term1 + term2 <= 4000000) {
        // Calculate the next term in the sequence
        int nextTerm = term1 + term2;

        // Output the next term
        cout << ", " << nextTerm;

        // Update terms for the next iteration
        term1 = term2;
        term2 = nextTerm;
    }

    // Move to the next line for better formatting
    cout << endl;

    // Indicate successful program execution by returning 0
    return 0;
}
