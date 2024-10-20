#include <iostream>
#include <iomanip>
using namespace std;

float avg_price, minibus_percent, truck_percent, train_percent;
void Cargo(int n);

int main() {
    int n;
    cout << "Enter the count of cargo for transportations:";
    cin >> n;
    
    Cargo(n);
    
    cout << fixed;
    cout << setprecision(2);
    cout << avg_price << endl;
    cout << minibus_percent << endl;
    cout << truck_percent << endl;
    cout << train_percent << endl;
}

void Cargo(int n) {
    float minibus_tons = 0; float truck_tons = 0; float train_tons = 0;
    float total_tons = 0; float total_cost = 0;
    
    for(int i = 1; i <= n; i++) {
        int tons;
        cout << "Enter the tonage of Cargo " << i << ": ";
        cin >> tons;
        total_tons = total_tons + tons;
        
        if(tons <= 3) {
            minibus_tons = minibus_tons + tons;
            total_cost = total_cost + (tons * 200);
        }
        else if(tons <= 11) {
            truck_tons = truck_tons + tons;
            total_cost = total_cost + (tons * 175);
        }
        else {
            train_tons = train_tons + tons;
            total_cost = total_cost + (tons * 120);
        }
    }
    
    avg_price = total_cost / total_tons;
    minibus_percent = (minibus_tons / total_tons) * 100;
    truck_percent = (truck_tons / total_tons) * 100;
    train_percent = (train_tons / total_tons) * 100;
}
