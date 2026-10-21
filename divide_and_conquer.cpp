#include <iostream>
using namespace std;

int searchInsert(int a[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == target) return mid;
        else if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main() {
    int n, target, a[100];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter target: ";
    cin >> target;
    cout << "Index = " << searchInsert(a, n, target) << endl;
    return 0;
}
