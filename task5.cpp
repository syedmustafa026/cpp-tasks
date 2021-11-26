#include <iostream>
using namespace std;
int main()
{

    int a = 3;
    while (a <= 729)
    {
        cout << a << endl;
        a *= 3;
    }

    int i = 2;
    switch (i)
    {
    case 1:
        cout << "I am in case 1 \n"
             << endl;
    case 2:
        cout << "I am in case 2 \n"
             << endl;
    case 3:
        cout << "I am in case 3 \n"
             << endl;
    default:
        cout << "I am in default \n"
             << endl;
    }

    int eng, phy, chem, maths, urdu, sum, percen;
    cout << "\t This is your Marksheet" << endl;
    cout << "Enter English Marks: ";
    cin >> eng;
    cout << "Enter physics Marks: ";
    cin >> phy;
    cout << "Enter Chemistry Marks: ";
    cin >> chem;
    cout << "Enter Maths Marks: ";
    cin >> maths;
    cout << "Enter Urdu Marks: ";
    cin >> urdu;
    sum = eng + phy + chem + urdu + maths;
    percen = (sum * 100) / 500;
    cout << "Your Total Sum is: " << sum << endl;
    cout << "Your Percentage is: " << percen << "%" << endl;
    char points = percen / 10;
    switch (points)
    {
    case 9:
    case 8:
        cout << "A-one grade";
        break;
    case 7:
        cout << "A grade";
    case 6:
        cout << "B grade";
        break;
    case 5:
        cout << "C grade";
        break;
    default:
        cout << "You are failed";
    }
    int day;
    cout << "Enfter day number\n";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "This is Monday \n";
        break;
    case 2:
        cout << "This is Tuseday\n";
        break;
    case 3:
        cout << "This is Wednesday\n";
        break;
    case 4:
        cout << "This is Thursday\n";
        break;
    case 5:
        cout << "This is Friday\n";
        break;
    case 6:
        cout << "This is Saturday\n";
        break;
    case 7:
        cout << "This is Sunday\n";
        break;
    default:
        cout << "Enter number between 1 to 7\n";
        break;


        char op;
        string choice;
        float num1, num2;
    loop:
        cout << "Enter two numbers: \n";
        cin >> num1 >> num2;
        cout << "Enter operator: +, -, *, /: ";
        cin >> op;
        switch (op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
        }
        goto loop;
    }
