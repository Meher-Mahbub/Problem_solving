#include <iostream>
#include <vector>
using namespace std;

int min_operations(const vector<int>& a, int n) {
    bool all_equal = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[0]) {
            all_equal = false;
            break;
        }
    }

    if (all_equal) return 1;

    bool sorted = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) return 2;

    return 3;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << min_operations(a, n) << endl;
    }

    return 0;
}
