#include <iostream>
using namespace std;

int main() {
    int n;
    int doctors = 7;
    int treated = 0; 
    int untreated = 0;
    cout << "Enter no of days you visited the hospital: ";
    cin >> n;

    for (int day = 1; day <= n; day++) {
        int patients;
        cout << "No of patients visited on day " << day << ": ";
        cin >> patients;

        if (day % 3 == 0 && untreated > treated) {
            doctors = doctors + 1;
        }

        if (patients <= doctors) {
            treated = treated + patients;
        } else {
            treated = treated + doctors;
            untreated = untreated + (patients - doctors);
        }
    }

    cout << "No of treated patients: " << treated << endl;
    cout << "No of untreated patients: " << untreated << endl;
}
