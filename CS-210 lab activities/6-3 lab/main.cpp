#include <string>    // For handling string input/output
#include <iostream>  // For standard input/output
#include <limits>    // For std::numeric_limits, used to clear invalid input

using namespace std;

int main() {
    string inputName; // To store the name input
    int age;          // To store the age input

    // Set exception mask for cin stream to throw an exception on invalid input
    cin.exceptions(ios::failbit);

    // Read the first name from the input
    cin >> inputName;

    // Continue processing until the input name is "-1" (termination condition)
    while (inputName != "-1") {
        try {
            // Try to read the age associated with the name
            cin >> age;

            // If successful, output the name and the incremented age
            cout << inputName << " " << (age + 1) << endl;
        } catch (ios_base::failure&) {
            // This block handles invalid input (e.g., age is not an integer)

            // Clear the error state of the input stream
            cin.clear();

            // Ignore the rest of the invalid input on the current line
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // Output the name and a default age of 0
            cout << inputName << " 0" << endl;
        }

        // Read the next name from the input
        cin >> inputName;
    }

    // Program ends when "-1" is encountered
    return 0;
}
