#include <iostream>
using namespace std;

void part1(int n);
void part2(int n);

int main() {
    int n;
    int number;
    cout << "Enter desired number of rows: ";
    cin >> number;
    n = number / 2;

    part1(n);
    part2(n);

    return 0;
}

void part1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = n - i; k > 0; k--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void part2(int n) {
    for (int i = n; i >= 1; i--) {
        for (int k = n - i; k > 0; k++) {
            cout << " ";
        }
        for (int j = i; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

