#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the vectors: ";
    cin >> n;

    int v1[n], v2[n];

    cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    int dotProduct = 0;
    for (int i = 0; i < n; ++i) {
        dotProduct += v1[i] * v2[i];
    }

    cout << "The dot product of the two vectors is: " << dotProduct;
    return 0;
}
