#include<iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
int main(){

	/*
int i = 1;

	while(i<=50){
		if(i % 2 == 0){
			cout<<i<<endl;				
		}
		i++;


	while (i<= m){
		if( i /i != 0){
cout<< i << endl;
		}
		i++;
	}

	getch();
}	}*/ 


	int id,g,num,ans,money,withdraw,newmoney,subtr;
	int amount =1000;
	cout<< "Enter your Id number\n" ;
	cin>> id;
		g=0000;
loop:

	if (id ==g){
	cout<< "Press 1 for deposit money\nPress 2 for Withdraw Amount\n Press 3 Check your balance \n SELECT ANY OPTION FROM THESE ";
	cin>> num;
	switch(num){
	case 1:
			  cout<< "Enter Amount for depositing money \n";
			  cin>>  money;
			newmoney = amount + money;
			cout<<"You added "<< money;
			cout<<"You new balance "<< newmoney << endl;

			break;
	case 2 : 
		 cout<< "Enter Amount for withdraw money \n";
			  cin>>  withdraw;
			subtr = amount - withdraw;
			cout<<"Your new amount is "<< subtr <<endl;
			break;


	case 3:
		cout<< "Your amount is "<< amount << endl;
			break;

	
default:
	cout << "Sahi daalo ";
}
	
	cout<< "boht ehsaan kiya atm use karke \n WApis use karna hai? (y/n) \n";
	cin>> ans;
	if (ans == 'y' || ans == 'Y'){
		goto loop;
	}
	else{
		cout << "Chalo niklo idhar se ";
	}}
	else {
		cout<< "Enter Valid ID ";
}
	getch();
}
