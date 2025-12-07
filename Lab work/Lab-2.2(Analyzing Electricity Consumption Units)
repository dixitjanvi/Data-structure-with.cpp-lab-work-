//2.2 “Analyzing Electricity Consumption Units: Count Even and Odd Meter Readings”
//A utility company records monthly electricity consumption of households in whole units. For
//audit purposes, they want to analyze whether customers' consumption patterns are more
//inclined toward even or odd units (which may relate to appliance usage patterns).
//You are assigned the task of writing a program that processes an array of N customer
//electricity consumption values and determines:
//● Total number of households with even unit consumption
//● Total number of households with odd unit consumption.


#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of households
    cout << "Enter number of households: ";
    cin >> n;

    int units[n];

    // Input consumption units
    cout << "Enter electricity consumption units for each household:\n";
    for (int i = 0; i < n; i++) {
        cin >> units[i];
    }

    int evenCount = 0, oddCount = 0;

    // Count even and odd consumption values
    for (int i = 0; i < n; i++) {
        if (units[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output results
    cout << "Total households with EVEN unit consumption: " << evenCount << endl;
    cout << "Total households with ODD unit consumption: " << oddCount << endl;

    return 0;
}
