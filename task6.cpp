#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // TASK 1
        cout<<"This is even numbers \n";
    	for (int i= 0; i<=50; i+=2){
    		cout<<i<<endl;
    	}
    	// TASK 2
    	int table;
    	cout<< " \t Enter Table number \n";
    	cin>> table;
    	for( int i=1; i<=10; ++i){
    		cout<<table<< "x" << i <<"=" <<table*i<< endl;
    //  // TASK 3
    	int n;
    double factor = 1;
    cout<<"Enter number for Factorial you want \n";
    cin>>n;
    for(int i =1; i<=n; ++i){
    	factor *=i;
    }
    cout<<"Factorial number of "<<n<<" is "<<factor;
    	// TASK 4
    	for(int i=1; i<=50; i++)
    {
    cout<<"Value of variable "<<i<< " is: " <<i-i+2*i*i<<endl;
    }
    // TASK 5
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    // TASK 6
    for (int i = 1; i <=5; ++i)
    {
        for (int j = 1; j <= 5; ++j){
            cout << i*j <<std::setw(5);
        }
         cout <<""<<endl;
    }

    // TASK 7
    double miles, km;
    int n;
    cout << "\t Which conversion table do you want \n";
    cout << "Press:\n1. Miles to Kilometer\n2. Kilometers to miles: \n";
    cin >> n;

    if (n == 1)
    {
        cout << "The conversion from miles to kilometers: \n";
        for (miles = 1; miles <= 15; miles++)
        {
            km = miles * 1.6;
            cout << "for value of " << miles << " the conversion is " << km << ""
                 << " Kilometers. \n";
        }
    }
    else if (n == 2)
    {
        cout << "The conversion from kilometers to miles: \n";
        for (km = 1; km <= 15; km++)
        {
            miles = (km / 1.6);
            cout << "for value of " << km << " the conversion is " << miles << ""
                 << " Kilometers. \n";
        }
    }
    else
    {
        cout << "Please Enter 1 or 2";
    }
}
