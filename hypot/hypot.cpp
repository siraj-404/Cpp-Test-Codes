#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "************************************************\n";
    cout << "This program calculates the hypotenuse of a right-angled triangle given the other two sides.\n";
    double a, b, c;
    cout << "Enter the value for side one of the triangle: \n";
    cin >> a;
    cout << "Enter the value for side two of the triangle: \n";
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "The hypotenuse of your triangle is " << c << endl;
    return 0;
}