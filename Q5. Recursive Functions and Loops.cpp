#include <iostream>

using namespace std;

// Function to calculate binomial coefficient C(n, k)
int binomialCoefficient(int n, int k) {
    // Base cases: C(n, 0) and C(n, n) are always 1
    if (k == 0 || k == n) {
        return 1;
    } else {
        // Recursive calculation for other cases
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

// Function to print Pascal's Triangle up to n rows
void printPascalsTriangle(int n) {
    // Iterate through each row of Pascal's Triangle
    for (int i = 0; i < n; ++i) {
        // Iterate through each element in the current row
        for (int j = 0; j <= i; ++j) {
            // Print the binomial coefficient for the current element
            cout << binomialCoefficient(i, j) << " ";
        }
        // Move to the next line after printing the elements of the current row
        cout << endl;
    }
}

// Main function
int main() {
    // Variable to store the number of rows for Pascal's Triangle
    int n;

    // Prompt the user to enter the number of rows
    cout << "Enter the number of rows for Pascal's Triangle: ";
    
    // Read the user input
    cin >> n;

    // Call the function to print Pascal's Triangle
    printPascalsTriangle(n);

    // Indicate successful program execution by returning 0
    return 0;
}
