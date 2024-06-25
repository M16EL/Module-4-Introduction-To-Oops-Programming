#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter values of array: ";
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Print the original array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Remove duplicates and negative values
    unordered_set<int> seen;
    vector<int> filteredArray;

    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && seen.find(a[i]) == seen.end()) {
            filteredArray.push_back(a[i]);
            seen.insert(a[i]);
        }
    }

    // Print the filtered array
    cout << "Filtered Array: ";
    for (int i = 0; i < filteredArray.size(); i++) {
        cout << filteredArray[i] << " ";
    }
    cout << endl;

    return 0;
}

