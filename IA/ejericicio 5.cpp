#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int scores[8];
    int approved = 0;
    int failed = 0;
    double sum = 0;

    cout << "Enter the scores of the 8 students: ";
    for (int i = 0; i < 8; ++i) {
        cin >> scores[i];
        sum += scores[i];
        if (scores[i] >= 70) {
            approved++;
        } else {
            failed++;
        }
    }

    double average = sum / 8;

    cout << "\nNumber of approved students: " << approved;
    cout << "\nNumber of failed students: " << failed;
    cout << "\nAverage grade: " << setprecision(2) << fixed << average;

    return 0;
}
