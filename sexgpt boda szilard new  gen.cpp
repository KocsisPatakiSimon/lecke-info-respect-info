#include <bits/stdc++.h>
using namespace std;

ifstream bac("bac.in");

int f[1001], a[1001], p = 1;

int main() {
    int x;
    // Read numbers from the file and mark them in the array `f`
    while (bac >> x) {
        f[x] = 1;
    }
    
    // Collect all marked numbers into array `a`
    for (int i = 1; i <= 1000; ++i) {
        if (f[i]) {
            a[p] = i;
            p++;
        }
    }
    p--; // Adjust p to the actual number of elements
    
    // Check if we have less than 2 numbers
    if (p < 2) {
        cout << "NU";
        return 0;
    }
    
    // Check for arithmetic progression
    bool ok = true;
    int r = a[2] - a[1];
    for (int i = 3; i <= p; ++i) {
        if (a[i] - a[i - 1] != r) {
            ok = false;
            break;
        }
    }
    
    if (ok) {
        cout << r;
    } else {
        cout << "NU";
    }
    
    return 0;
}
