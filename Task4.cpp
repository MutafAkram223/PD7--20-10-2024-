#include <iostream>
using namespace std;
int triangle(int n);
main()
{
    int n;
    cout << "Enter the number of triangle:";
    cin >>n;
    int dots = triangle(n);
    cout << "Number of dots:" << dots << endl;

}
int triangle(int n)
{
    int dots;
    dots = (n*(n+1))/2;
    return dots;
}