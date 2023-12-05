#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int n = 10;
    int a, b, cnt = 0, moves = 0;
    int arr[n] = {1,2,5,4,3,1,5,3,2,4};
    bool found[n] = {false};

    while (cnt < n / 2) {
        for (int i = 0; i < n; i++) {
            if (found[i]) {
                cout << arr[i] << " ";
            } else {
                cout << "? ";
            }
        }
        cout << endl;

        cout << "Enter two indices: ";
        cin >> a >> b;

        if (a >= 0 && a < n && b >= 0 && b < n && !found[a] && !found[b]) {
            cout << "The number at index " << a << " is " << arr[a] << endl;
            cout << "The number at index " << b << " is " << arr[b] << endl;

            if (arr[a] == arr[b]) {
                cout << "Match found!" << endl;
                found[a] = true;
                found[b] = true;
                cnt++;
            } else {
                cout << "Not equal" << endl;
            }

            moves++;
        } else {
            cout << "" << endl;
        }
    }

    cout << " Great job! You found " << moves << " moves." << endl;

    return 0;
}