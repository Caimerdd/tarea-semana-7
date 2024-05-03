#include<iostream>
using namespace std;

int main() {
    int grades[10];
    float sum = 0;

    cout << "Enter the grades of the 10 students: ";
    for (int i = 0; i < 10; ++i) {
        cin >> *(grades + i);
        sum += *(grades + i);
    }

    float average = sum / 10;

    cout << "The average grade of the class is: " << average;
    return 0;
}