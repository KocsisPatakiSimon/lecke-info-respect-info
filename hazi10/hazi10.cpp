#include <iostream>

using namespace std;

int main() {
    int n, szam[100], aux;
    cout << "Milyen hosszu a tomb = ";
    cin >> n;


    for(int i = 0; i < n; i++) {
        cin >> szam[i];
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (szam[i] > szam[j]) {
                aux = szam[j];
                szam[j] = szam[i];
                szam[i] = aux;
            }
        }
    }


    int k = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (szam[i] != szam[i + 1]) {
            szam[k++] = szam[i];
        }
    }
    szam[k++] = szam[n - 1];



     int r = szam[1] - szam[0];
    for(int i = 1; i < k; i++) {
        if (szam[i] - szam[i - 1] != r) {
            cout << "NU";
            return 0;
        }
    }

    cout << r;

    return 0;
}
