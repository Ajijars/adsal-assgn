#include <iostream>
using namespace std;

int n, a[20], side, sides[4];

bool solve(int idx) {
    if (idx == n) return true;
    for (int i = 0; i < 4; i++) {
        if (sides[i] + a[idx] > side) continue;
        sides[i] += a[idx];
        if (solve(idx + 1)) return true;
        sides[i] -= a[idx];
        if (sides[i] == 0) break;
    }
    return false;
}

int main() {
    int sum = 0;
    cout << "Enter number of matchsticks: ";
    cin >> n;
    cout << "Enter " << n << " lengths: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 4 != 0) {
        cout << "false" << endl;
        return 0;
    }
    side = sum / 4;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[i]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    if (a[0] > side) {
        cout << "false" << endl;
        return 0;
    }

    cout << (solve(0) ? "true" : "false") << endl;
    return 0;
}
