#include <iostream>
#include <iomanip>
using namespace std;


double celsius(int fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}


void showCelsiusTable() {
    cout << "Fahrenheit\tCelsius\n";
    cout << "------------------------\n";

    for (int f = 0; f <= 20; f++) {
        cout << setw(9) << f << "\t" << fixed << setprecision(2) << celsius(f) << endl;
    }
}

int main() {
    showCelsiusTable();
    return 0;
}
