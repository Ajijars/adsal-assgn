#include <iostream>
using namespace std;

int main() {
    int n, k, a[100], sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter k: ";
    cin >> k;

    while (k--) {
        int min = 0;
        for (int i = 1; i < n; i++)
            if (a[i] < a[min]) min = i;
        a[min] = -a[min];
    }

    for (int i = 0; i < n; i++) sum += a[i];
    cout << "Largest sum = " << sum << endl;
    return 0;
}
