#include <iostream>
#include <vector>
#include <algorithm> // for std::sort and std::unique

using namespace std;

int main() {
    int n;
    cout << "Milyen hosszu a tomb = ";
    cin >> n;

    vector<int> szam(n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        cin >> szam[i];
    }

    // Step 1: Sort the array using an efficient sort algorithm (O(n log n))
    sort(szam.begin(), szam.end());

    // Step 2: Remove duplicates using std::unique and vector's erase method (O(n))
    auto lastUnique = unique(szam.begin(), szam.end());
    szam.erase(lastUnique, szam.end());

    // Step 3: Check if the remaining elements form an arithmetic sequence
    int k = szam.size();
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