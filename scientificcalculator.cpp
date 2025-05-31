#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void showMenu() {
    cout << "=== Scientific Calculator ===\n";
    cout << "Available operations:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Power (pow)\n";
    cout << "6. Square root (sqrt)\n";
    cout << "7. Sine (sin)\n";
    cout << "8. Cosine (cos)\n";
    cout << "9. Tangent (tan)\n";
    cout << "10. Logarithm base 10 (log)\n";
    cout << "11. Natural log (ln)\n";
    cout << "12. Absolute (abs)\n";
    cout << "0. Exit\n";
}

int main() {
    int choice;
    double a, b, result;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> a >> b;
                result = a + b;
                break;
            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> a >> b;
                result = a - b;
                break;
            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> a >> b;
                result = a * b;
                break;
            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b == 0) {
                    cout << "Error: Division by zero!\n";
                    continue;
                }
                result = a / b;
                break;
            case 5: // Power
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                result = pow(a, b);
                break;
            case 6: // Square root
                cout << "Enter number: ";
                cin >> a;
                result = sqrt(a);
                break;
            case 7: // Sine
                cout << "Enter angle in degrees: ";
                cin >> a;
                result = sin(a * M_PI / 180); // Convert to radians
                break;
            case 8: // Cosine
                cout << "Enter angle in degrees: ";
                cin >> a;
                result = cos(a * M_PI / 180);
                break;
            case 9: // Tangent
                cout << "Enter angle in degrees: ";
                cin >> a;
                result = tan(a * M_PI / 180);
                break;
            case 10: // Log base 10
                cout << "Enter number: ";
                cin >> a;
                result = log10(a);
                break;
            case 11: // Natural log
                cout << "Enter number: ";
                cin >> a;
                result = log(a);
                break;
            case 12: // Absolute
                cout << "Enter number: ";
                cin >> a;
                result = fabs(a);
                break;
            case 0:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
                continue;
        }

        cout << "Result: " << result << "\n\n";
    } while (true);

    return 0;
}
