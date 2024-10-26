#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

    // Initializing variable:
    double carMilage;
    double gasCost;

    // Getting user's input:
    std::cin >> carMilage;
    std::cin >> gasCost;

    // Changing floats to two decimals
    cout << fixed << setprecision(2);

    // Calculating the price for 20, 75 and 500 miles
    double twentyMiles = (20 / carMilage) * gasCost;
    double seventyFiveMiles = (75 / carMilage) * gasCost;
    double fiveHundredMiles = (500 / carMilage) * gasCost;

    // Showing results in the terminal
    std::cout << twentyMiles << " " << seventyFiveMiles << " " << fiveHundredMiles << std::endl;

    return 0;
}
