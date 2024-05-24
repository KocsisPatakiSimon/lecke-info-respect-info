#include <iostream>

using namespace std;

int main() {
    int n, szam[100], aux;

    cout << "Milyen hosszu a tomb = ";
    cin >> n;

    // Read array elements
    for (int i = 0; i < n; i++) {
        cin >> szam[i];
    }

    // Selection sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (szam[i] > szam[j]) {
                aux = szam[j];
                szam[j] = szam[i];
                szam[i] = aux;
            }
        }
    }

    // Remove duplicates
    int k = 0; // Index for the next unique element
    for (int i = 0; i < n - 1; ++i) {
        if (szam[i] != szam[i + 1]) {
            szam[k++] = szam[i];
        }
    }
    szam[k++] = szam[n - 1]; // Add the last element

    // Check if the remaining elements form an arithmetic sequence
    if (k < 2) {
        cout << "Array too short to determine an arithmetic sequence";
        return 0;
    }

    int r = szam[1] - szam[0]; // Common difference

    for (int i = 1; i < k; i++) {
        if (szam[i] - szam[i - 1] != r) {
            cout << "NU";
            return 0;
        }
    }

    cout << r; // Output the common difference

    return 0;
}