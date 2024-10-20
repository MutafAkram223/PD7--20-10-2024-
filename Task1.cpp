#include <iostream>
using namespace std;
void shape(int n);
main()
{
    int n;
    cout << "Enter the desired number of rows:";
    cin >> n;
    shape(n);
}

void shape(int n)
{
    for (int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout <<"* ";
        }
        cout << endl ;
    }

}