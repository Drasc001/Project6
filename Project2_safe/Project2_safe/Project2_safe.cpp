#include <iostream>
#include <string>

using namespace std;

// Function to get number of accidents for a region
int getAccidents(string regionName) {
    int accidents;
    do {
        cout << "Enter the number of reported accidents in the " << regionName << " region: ";
        cin >> accidents;

        if (accidents < 0) {
            cout << "Invalid input. Accidents cannot be negative. Try again.\n";
        }

    } while (accidents < 0);

    return accidents;
}

// Function to determine and display the region with the lowest number of accidents
void findLowest(int north, int south, int east, int west, int central) {
    int lowest = north;
    string region = "North";

    if (south < lowest) {
        lowest = south;
        region = "South";
    }
    if (east < lowest) {
        lowest = east;
        region = "East";
    }
    if (west < lowest) {
        lowest = west;
        region = "West";
    }
    if (central < lowest) {
        lowest = central;
        region = "Central";
    }

    cout << "\nThe region with the fewest reported accidents is: " << region
        << " (" << lowest << " accidents).\n";
}

int main() {
    int north = getAccidents("North");
    int south = getAccidents("South");
    int east = getAccidents("East");
    int west = getAccidents("West");
    int central = getAccidents("Central");

    findLowest(north, south, east, west, central);

    return 0;
}