#include <iostream>
#include <string>
using namespace std;

int main() {

    // Initializing variables:
    string item;
    int number;

    // Loop to keep the program running until item = "quit"
    while (true)
    {
        // Collecting user input
        std::cin >> item >> number;
        
        // Conditional to exit program when item = "quit"
        if (item == "quit")
        {
            break;
        }
        
        // Output with mad lib using the item and number the user chose.
        std::cout << "Eating " << number << " " << item << " a day keeps you happy and healthy." << endl;
        
    }
    
    return 0;
}
