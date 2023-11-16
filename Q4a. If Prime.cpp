#include <iostream>

// Function to check if a given number is prime
bool isprime(int n) {
    if (n <= 1) {
        return false;  // 1 and numbers less than 1 are not prime
    }

    // Check divisibility by numbers in the range [2, sqrt(n)]
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }

    return true;  // n is not divisible by any number in the range [2, sqrt(n)]
}

// Function to test the isprime function with specific inputs
void test_isprime() {
    std::cout << "isprime(2) = " << isprime(2) << '\n';
    std::cout << "isprime(10) = " << isprime(10) << '\n';
    std::cout << "isprime(17) = " << isprime(17) << '\n';
}

// Main function
int main() {
    // Call the test_isprime function to demonstrate the isprime function
    test_isprime();

    // Indicate successful program execution by returning 0
    return 0;
}
