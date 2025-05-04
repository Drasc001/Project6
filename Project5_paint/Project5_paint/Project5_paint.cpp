#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number_of_rooms;
    double price_per_gallon;
    double square_feet;
    double total_gallons = 0, total_hours = 0, total_paint_cost = 0, total_labor_charges = 0;

    
    cout << "Enter number of rooms: ";
    cin >> number_of_rooms;
    if (number_of_rooms < 1) {
        cout << "Number of rooms must be at least 1" << endl;
        return 0;
    }

    
    cout << "Enter price of paint per gallon: $";
    cin >> price_per_gallon;
    if (price_per_gallon < 10.00) {
        cout << "Price must be at least $10.00" << endl;
        return 0;
    }

    
    for (int i = 1; i <= number_of_rooms; i++) {
        
        cout << "Enter square footage for room " << i << ": ";
        cin >> square_feet;
        if (square_feet < 0) {
            cout << "Square footage cannot be negative" << endl;
            return 0;
        }

        
        double gallons_of_paint = square_feet / 110;
        double labor_hours = gallons_of_paint * 8;
        double cost_of_paint = gallons_of_paint * price_per_gallon;
        double labor_charges = labor_hours * 25;

        
        total_gallons += gallons_of_paint;
        total_hours += labor_hours;
        total_paint_cost += cost_of_paint;
        total_labor_charges += labor_charges;
    }

    
    double total_cost = total_paint_cost + total_labor_charges;

    
    cout << "\nTotal gallons of paint required: " << total_gallons << endl;
    cout << "Total hours of labor required: " << total_hours << endl;
    cout << "Total cost of paint: $" << total_paint_cost << endl;
    cout << "Labor charges: $" << total_labor_charges << endl;
    cout << "Total cost of the paint job: $" << total_cost << endl;

    return 0;
}
