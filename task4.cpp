#include <iostream>
#include <math.h>
using namespace std;
int main()
{
// task 6(ii)
    cout << " Enter two numbers \n";
    float x, y;
    cin >> x >> y;
    double z = (x - y) / (x + y);
    cout << " z = (x-y)/(x+y): " << z;
 // task 6(i)
    cout << " Enter three numbers \n";
    float a, b, c, result;
    int root;
    cin >> a >> b >> c;
    root = (-b + (sqrt((b * b) - (4 * a * c))));
    result = root / (2 * a);
    cout << "root = " << root << endl;
 // task 4
    int years;
    cout << "\t Enter your Age! \n";
    cin >> years;
    int days = years * 365;
    cout << "Your Age is: " << days << " days";
 // task 1
    double a, b, c, d, sum, product, avg;
    cout << "\t Enter Any four Numbers \n";
    cout << "Enter first Numbers \n";
    cin >> a;
    cout << "Enter second Numbers \n";
    cin >> b;
    cout << "Enter third Numbers \n";
    cin >> c;
    cout << "Enter fourth Numbers \n";
    cin >> d;
    sum = a + b + c + d;
    cout << " \n Sum of four num is: " << sum;
    product = a * b * c * d;
    cout << "\n product of four num is: " << product;
    avg = sum / 4;
    cout << "\n Average of four num is: " << avg;
 
 // task 2
    int cel;
    cout << "Enter temperature in celcius \n";
    cin >> cel;
    int fahr = (cel * 9 / 5) + 32;
    cout << "Temperature in fahrenheit is: " << fahr;
 // task 3
    double pi = 3.412;
    float r;
    cout << "\t Enter the radius to find Area of Circle \n";
    cin >> r;
    double formula = pi * r * r;
    cout << "\t The Area of circle is:  \n";
    cout << formula;
}
