// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5], i;
//     cout << "Enter 5 Array Elements: \n";
//     for (i = 0; i < 5; i++)
//         cin >> arr[i];
//     cout << "\nThe Original Array is:\n";
//     for (i = 0; i <= 4; i++)
//         cout << arr[i] << " ";
//     cout << "\n\nThe Reverse of Given Array is:\n";
//     for (i = 4; i >= 0; i--)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     double sum;
//     int arr[7];
//     cout<<"Enter 7 numbers ";
//     for (int i = 0; i <= 7; i++)
//     {
//         cin >> arr[i];
//         sum+=arr[i];

//     }
//     double avg = sum / 7;
//     cout<<"Average of 7 days Temperature is: "<<avg;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned int r, c, a[4][4], b[4][4], total[4][4];
//     cout << "enter Rows between 2 to 4 \n";
//     cin >> r;
//     cout << "enter columns between 2 to 4 \n";
//     cin >> c;
//     cout << "\tEnter First Matrix\n";
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             cout << "Enter element a" << i + 1 << j + 1 << " : ";
//             cin >> a[i][j];
//         }
//     cout << "\n\tEnter Second Matrix\n";
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             cout << "Enter element b" << i + 1 << j + 1 << " : ";
//             cin >> b[i][j];
//         }

//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//             total[i][j] = a[i][j] + b[i][j];

//     cout << endl
//          << "Sum of two matrix is: " << endl;
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             cout << total[i][j] << " ";
//             if (j == c - 1)
//                 cout << endl;
//         }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[4][4], trans[10][10], r, c, i, j;
//     cout << "enter Rows between 2 to 4 \n";
//     cin >> r;
//     cout << "enter column between 2 to 4 \n";
//     cin >> c;
//     cout << "\tEnter First Matrix\n";
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             cout << "Enter element a" << i + 1 << j + 1 << " : ";
//             cin >> a[i][j];
//         }

//     cout << "\nEntered Matrix: " << endl;
//     for (int i = 0; i < r; ++i)
//     {
//         for (int j = 0; j < c; ++j)
//         {
//             cout << " " << a[i][j];
//             if (j == c - 1)
//                 cout << "\n\n";
//         }
//     }

//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//         {
//             trans[j][i] = a[i][j];
//         }

//     cout << "\nTranspose of entered Matrix: " << endl;
//     for (int i = 0; i < c; ++i)
//         for (int j = 0; j < r; ++j)
//         {
//             cout << " " << trans[i][j];
//             if (j == r - 1)
//                 cout << "\n\n";
//         }
// }

// #include <iostream>
// #define ROW 6
// #define COL 4
// using namespace std;
// void highestSale(long s[][COL]);
// void poorPerformance(long s[][COL]);
// int main()
// {
//     long emplist[6][4] =
//         {
//             {320000, 556000, 498000, 479000},
//             {525000, 456000, 550000, 479000},
//             {430000, 390000, 375000, 320000},
//             {325000, 459000, 455000, 495000},
//             {480000, 500000, 435000, 440000},
//             {590000, 570000, 520000, 425000}};
//     highestSale(emplist);
//     poorPerformance(emplist);
//     system("pause");
// }
// void highestSale(long s[][COL])
// {
//     long sum[6] = {0};
//     long highest;
//     int r;
//     int emp = 0;
//     for (r = 0; r < ROW; r++)
//     {
//         for (int col = 0; col < COL; col++)
//         {
//             sum[r] += s[r][col];
//         }
//     }
//     for (r = 0; r < ROW; r++)
//     {
//         cout << "The sum of said 6x4 array is :\t" << sum[r] << endl;
//     }
//     highest = sum[0];
//     for (r = 0; r < ROW; r++)
//     {
//         if (highest < sum[r])
//         {
//             highest = sum[r];
//             emp = r;
//         }
//     }
//     cout << "The highest gaining of point of employee is :\t" << emp + 1 << endl;
//     cout << " and his value is:\t" << highest << endl;
// }
// void poorPerformance(long s[][COL]){
//     long diff[6] = {0};
//     long lowest;
//     int r;
//     int emp = 0;
//     for (r = ROW - 1; r >= 0; r--){
//         for (int col = COL - 1; col >= 0; col--)
//         {
//             diff[r] += s[r][col];
//         }
//     }
//     for (r = ROW - 1; r >= 0; r--){
//         cout << "The sum of said 6x4 array is :\t" << diff[r] << endl;
//     }
//     lowest = diff[0];
//     for (r = ROW - 1; r >= 0; r--)
//     {
//         if (lowest > diff[r])
//         {
//             lowest = diff[r];
//             emp = r;
//         }
//     }
//     cout << "The lowest of point of employee is :\t" << emp + 1 << endl;
//     cout << " and his value is:\t" << lowest << endl;
// }
