#include <iostream>
#include <cmath>
using namespace std;

bool prime(int number);
long long primorial(int n);

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    primorial(number);
    cout << "The Primorial is: " << product << endl;
}

bool prime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
//long long is liye istemal kiya he, taake long range ke liye primorial nikala ja ske
long long primorial(int number) {
    int count = 0;
    long long product = 1;
    int current_n = 2;

    while (count < number) {
        if (prime(current_n)) {
            product = product * current_n;
            count++;
        }
        current_n++;
    }

    return product;
}
