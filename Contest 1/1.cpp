#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int r;
    cin >> r;
    while (r--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int amax = *max_element(a.begin(), a.end());
        int bmax = *max_element(b.begin(), b.end());

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != amax && b[i] != bmax && a[i] != bmax && b[i] != amax) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
