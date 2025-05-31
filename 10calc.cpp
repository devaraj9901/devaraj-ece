#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

int main() {
    cout << "Press Enter to start the timer...";
    cin.get();  // Wait for user to press Enter

    auto start = high_resolution_clock::now();

    cout << "Timer started. Press Enter to stop it...";
    cin.get();  // Wait again for user to press Enter

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(end - start);

    cout << "Elapsed time: " << duration.count() << " seconds" << endl;

    return 0;
}