#include <iostream>
#include <vector>

using namespace std;

// Function to print the elements of a vector
void print_vector(const vector<int>& v) {
    // Print the opening angle bracket of the vector
    cout << "<";

    // Iterate through the elements of the vector
    for (size_t i = 0; i < v.size(); ++i) {
        // Print the current element
        cout << v[i];

        // If the current element is not the last one, print a comma and space
        if (i < v.size() - 1) {
            cout << ", ";
        }
    }

    // Print the closing angle bracket of the vector and move to the next line
    cout << ">" << endl;
}

int main() {
    // Example usage of the print_vector function

    // Create a vector of integers and initialize it with values
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Call the print_vector function with the created vector
    print_vector(myVector);

    // Indicate successful program execution by returning 0
    return 0;
}
