#include <iostream>
using namespace std;

int main() {
    int n, q, a[100], prefix[101];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    prefix[0] = 0;
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + a[i];

    cout << "Enter number of queries: ";
    cin >> q;
    while (q--) {
        int left, right;
        cout << "Enter left and right index: ";
        cin >> left >> right;
        cout << "Sum = " << prefix[right + 1] - prefix[left] << endl;
    }
    return 0;
}
