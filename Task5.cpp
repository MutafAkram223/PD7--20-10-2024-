#include <iostream>
using namespace std;
bool prime(int number);
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    prime(number);
    if (prime(number)){
        cout << number << " is prime number";
    }
    else {
        cout << number << " is not prime number";
    }

}
bool prime(int number)
{
    if (number <= 1){
        return false;
    }
    for (int i=2; i<number; i++)
    { 
        if(number % i == 0){
            return false;
        }
    }
    return true;
}