#include <iostream>
#include <vector>

using namespace std;

// Function to print the elements of a vector
void print_vector(const vector<int>& v) {
    // Print the opening square bracket of the vector
    cout << "[";

    // Iterate through the elements of the vector
    for (size_t i = 0; i < v.size(); ++i) {
        // Print the current element
        cout << v[i];

        // If the current element is not the last one, print a comma and space
        if (i < v.size() - 1) {
            cout << ", ";
        }
    }

    // Print the closing square bracket of the vector and move to the next line
    cout << "]" << endl;
}

// Function to factorize a given number and return a vector of its factors
vector<int> factorize(int n) {
    // Initialize a vector to store the factors of the given number
    vector<int> answer;

    // Iterate through numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Check if i is a factor of n
        if (n % i == 0) {
            // If i is a factor, add it to the vector
            answer.push_back(i);
        }
    }

    // Return the vector of factors
    return answer;
}

// Function to test the factorize function with specific inputs
void test_factorize() {
    // Print the factors of 2
    print_vector(factorize(2));

    // Print the factors of 72
    print_vector(factorize(72));

    // Print the factors of 196
    print_vector(factorize(196));
}

// Main function
int main() {
    // Call the test_factorize function to demonstrate the factorize function
    test_factorize();

    // Indicate successful program execution by returning 0
    return 0;
}
