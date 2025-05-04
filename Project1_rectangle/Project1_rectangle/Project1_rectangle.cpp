#include <iostream>
using namespace std;

void getLengthWidth(double& length, double& width) {
    do {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        if (length <= 0)
            cout << "Length must be a positive value.\n";
    } while (length <= 0);

    do {
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        if (width <= 0)
            cout << "Width must be a positive value.\n";
    } while (width <= 0);
}

double calcPerimeter(double length, double width) {
    return 2 * (length + width);
}

double calcArea(double length, double width) {
    return length * width;
}

void displayProperties(double perimeter, double area) {
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
}

int main() {
    double length, width, perimeter, area;
    char choice;

    do {
        getLengthWidth(length, width);
        perimeter = calcPerimeter(length, width);
        area = calcArea(length, width);
        displayProperties(perimeter, area);

        cout << "Do you want to process another rectangle? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended.\n";
    return 0;
}

