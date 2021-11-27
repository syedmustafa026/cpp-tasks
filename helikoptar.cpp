// JUST FOR FUN WE DID THIS

#include<stdlib.h>
#include<iostream>
#include<windows.h>
#include<stdio.h>
using namespace std;
void setCursorPosition(int x, int y)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout.flush();
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}
int main(){
    int i=0;
    string s;
    cout<<"Start the helikoptar: ";
    cin>>s;
    system("cls");
    cout<<endl<<endl;
    cout<<"                 A"<<endl;
    cout<<"         /-------------"<<endl;
    cout<<"MUSTAFA =====      []   \\"<<endl;
    cout<<"         \\               \\"<<endl;
    cout<<"          \\_______________\\"<<endl;          
    cout<<"               I       I     "<<endl;
    while(true){
        if(i%2 == 0){
            setCursorPosition(2,1);
            cout<<"    HELIKOPTAR :          "<<endl;
            setCursorPosition(0,3);
            cout<<"I";
            setCursorPosition(0,5);
            cout<<" ";
        }else{
            setCursorPosition(0,3);
            cout<<" ";
            setCursorPosition(2,1);
            cout<<"               : HELIKOPTAR "<<endl;
            setCursorPosition(0,5);
            cout<<"I";
        }
        i++;
        Sleep(100);
        cout.flush();
    }
}
