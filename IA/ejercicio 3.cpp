#include<iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; ++i) {
        sum += i*i;
    }

    cout << "Sum of squares of numbers between 1 and 100 is: " << sum;
    return 0;
}
