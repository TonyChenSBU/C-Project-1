#include <iostream>

using namespace std;

int main() {
    // Declare an integer variable to store user input
    int n;
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    
    // Read user input and store it in the variable 'n'
    cin >> n;

    // Use a switch statement to check the value of 'n'
    switch (n) {
        // If 'n' is -1, execute the following block of code
        case -1:
            cout << "negative one" << endl;
            break;
        
        // If 'n' is 0, execute the following block of code
        case 0:
            cout << "zero" << endl;
            break;
        
        // If 'n' is 1, execute the following block of code
        case 1:
            cout << "positive one" << endl;
            break;
        
        // If 'n' does not match any of the above cases, execute the following block of code
        default:
            cout << "other value" << endl;
    }

    // Indicate successful program execution by returning 0
    return 0;
}
