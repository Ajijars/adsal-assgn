#include <iostream>
using namespace std;

int n, a[10], used[10], path[10];

void permute(int pos) {
    if (pos == n) {
        for (int i = 0; i < n; i++) cout << path[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = 1;
            path[pos] = a[i];
            permute(pos + 1);
            used[i] = 0;
        }
    }
}

int main() {
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " distinct elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "All permutations:" << endl;
    permute(0);
    return 0;
}
