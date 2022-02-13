// #include <iostream>
// using namespace std;
// int fibo(int num);

// int main()
// {
//     int c = 0, i;
//     cout << "Fibonacci Series: \n";
//     for (i = 1; i <= 25; i++) {
//         cout << "\n"
//              << fibo(c);
//         c++;
//     }
// }
// int fibo(int num)
// {
//     if (num == 0){
//         return 0;
//     }
//     else if (num == 1)
//     {
//         return 1;
//     }
//     return (fibo(num - 1) + fibo(num - 2));
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int factorial(int);
//     int facto, value;
//     cout << "Enter any number: ";
//     cin >> value;
//     facto = factorial(value);
//     cout << "Factorial of " << value << " is " << facto << endl;
//     return 0;
// }
//     int factorial(int n){

//         if (n < 0){

//             return (-1);
//         }
//         if (n == 0){

//             return (1);
//         }
//         else {
//             return (n * factorial(n - 1));
//         }
//     }

// #include <iostream>
// using namespace std;
// void reverse(string str)
// {
//     if(str.size() == 0)
//     {
//         return ;
//     }
//     else{
//     reverse(str.substr(1));
//     cout << str[0];
//     }
// }

// int main()
// {
//     string a;
//     cout<<"Enter phrase  to reverse it: \n";
//     cin>>a;
//     reverse(a);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sum(int x);
// int main()
// {
//     int num =10;
//     cout << "Sum of Series (2 * 2) + 2 = " << sum(num) << endl;
//     return 0;
// }
// int sum(int x)
// {
//     if (x != 0)
//     {
//         return (2 * x) + 2 + sum(x - 1);
//     }
//     return 0;
// }
