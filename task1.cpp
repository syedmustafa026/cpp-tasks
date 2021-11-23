#include <iostream>
using namespace std;

int main()
{
    // task 4
    int a, b;
    cout << "Enter first num\n";
    cin >> a;
    cout << "Enter second num\n";
    cin >> b;
    int formula = a * a + 2 * a * b + b * b;
    cout << formula;
    return 0;
    // task 5
    int distance;
    int time;
    cout << "Calculating the distance\n";
    cin >> distance;
    cout << "Calculating the time\n";
    cin >> time;
    cout << "the speed is: \n";
    int speed = distance / time;
    cout << speed;

    // Theory lab

    int num1, num2;
    string name1, name2;
    cout << "Please! \n";
    cout << "\t Enter your first name? \n";
    cin >> name1;
    cout << "\t Enter your last name? \n";
    cin >> name2;
    cout << "\t Your full name is \n";
    cout << name1 << endl;
    cout << name2 << endl;
    cout << "\t ******* Multiplying two numbers ***** \n ";
    cout << " Enter First Number\n";
    cin >> num2;
    cout << " Enter Second Number\n";
    cin >> num1;
    cout << "The Answer is\n";
    cout << (num1 * num2);

    cout << "My Name is Syed Mustafa " << endl;
    cout << "My Father Name is Syed Mashood \n";
    cout << "The sum of two Numbers 60 + 78: " << 60 + 78 << "\n";

    float const score = 45;
    cout << "My score is: " << score;

    int a, b;
    cout << "Enter First Number" << endl;
    cin >> a;

    cout << "Enter Second Number" << endl;
    cin >> b;

    cout << "The sum is: " << a + b;

    // Lab Task 1
    cout << "My First Program in C++";

    // Lab Task 2
    int x;
    x = 5;
    cout << " x = " << x;

    // Lab Task 3

    cout << " \n Sir Syed University of Engineering and Technology " << endl;

    cout << " \t \n programming fundamentals using C++ ";

    // Lab Task 4

    cout << "x =" << 5 << endl;
    cout << "Y= " << 10 << endl;
    cout << "x+y= " << 5 + 10 << endl;
}
