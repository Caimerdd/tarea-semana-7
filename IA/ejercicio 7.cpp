#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the vectors: ";
    cin >> n;

    int v1[n], v2[n], v3[n];

    cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    for (int i = 0; i < n; ++i) {
        v3[i] = v1[i] + v2[i];
    }

    cout << "The sum of the two vectors is: ";
    for (int i = 0; i < n; ++i) {
        cout << v3[i] << " ";
    }
    cout << endl;

    return 0;
}