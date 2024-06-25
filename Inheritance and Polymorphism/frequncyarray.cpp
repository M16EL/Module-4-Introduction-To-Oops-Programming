#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    int a[n];

    cout << "Enter values of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Arrays to store duplicates and their frequencies
    int duplicates[n];
    int frequencies[n];
    int dupIndex = 0;

    // Initialize frequencies array to 0
    for (int i = 0; i < n; i++) {
        frequencies[i] = 0;
    }

    // Find duplicates and count frequencies
    for (int i = 0; i < n; i++) {
        int count = 1;
        int isAlreadyCounted = 0;

        // Check if the element is already counted as duplicate
        for (int k = 0; k < dupIndex; k++) {
            if (a[i] == duplicates[k]) {
                isAlreadyCounted = 1;
                break;
            }
        }

        if (isAlreadyCounted == 0) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                }
            }

            // If count is greater than 1, it's a duplicate
            if (count > 1) {
                duplicates[dupIndex] = a[i];
                frequencies[dupIndex] = count;
                dupIndex++;
            }
        }
    }

    // Print duplicates with their frequencies
    cout << "Duplicates with their frequencies:" << endl;
    for (int i = 0; i < dupIndex; i++) {
        cout << "Value: " << duplicates[i] << ", Frequency: " << frequencies[i] << endl;
    }

    return 0;
}

