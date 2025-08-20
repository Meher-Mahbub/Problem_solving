#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> candles(N);

    for (int i = 0; i < N; ++i) {
        cin >> candles[i];
    }

    int min_time = INT_MAX;

    // Iterate over all possible sets of K consecutive candles
    for (int i = 0; i <= N - K; ++i) {
        int left = candles[i];
        int right = candles[i + K - 1];

        // Calculate the minimum time for this range
        int time = min(abs(left), abs(right)) + (right - left);

        // Update the minimum time
        min_time = min(min_time, time);
    }

    // Output the result
    cout << min_time << endl;

    return 0;
}
