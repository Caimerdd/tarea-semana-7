#include<iostream>
using namespace std;

int main() {
    int n, sum;

    cout << "Enter a positive integer: ";
    cin >> n;

    sum = n*(n+1)/2;

    cout << "Sum = " << sum;
    return 0;
}