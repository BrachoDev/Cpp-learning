#include <iostream>
#include <vector>
// Adding <algorithm> to be able to use sort()
#include <algorithm>
using namespace std;

/* Define your function here */
// Creating SortVector function to sort vector in descending order

void SortVector(vector<int>& myVector){
    // Sorting vector in descending order
    sort(myVector.begin(), myVector.end(), greater<int>());
}

int main() {
    /* Type your code here */

    // Initializing inputedNumbers variable
    int inputNumbers;
    
    // Getting values from user. NOTE: first input number is the number of elements
    cin >> inputNumbers;
    
    // Initializing a vector with a specified size
    vector<int> myVector(inputNumbers);
    
    // Iterating over each element of the vector and add it to myVector
    for (int i = 0; i < inputNumbers; ++i) {
        cin >> myVector[i];
    }
    
    // Calling the SortVector function to sort the vector
    SortVector(myVector);
    
    // Output with the sorted vector with each element followed by a comma
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << ",";
    }

    // Ending line after the final vector is displayed
    cout << endl;

   return 0;
}
