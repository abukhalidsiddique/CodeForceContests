#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m;
        cin >> m;

        vector<vector<int>> a(m);
        set<int> used;

        for (int i = 0; i < m; i++) {
            int ni;
            cin >> ni;

            a[i].resize(ni);
            for (int j = 0; j < ni; j++) {
                cin >> a[i][j];
            }
        }

        vector<int> winners(m, -1);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < a[i].size(); j++) {
                if (used.count(a[i][j]) == 0) {
                    winners[i] = a[i][j];
                    used.insert(a[i][j]);
                    break;
                }
            }
            if (winners[i] == -1) {
                cout << "-1\n";
                break;
            }
        }

        if (winners[m-1] != -1) {
            for (int i = 0; i < m; i++) {
                cout << winners[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}

