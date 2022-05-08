#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
//creating the class here...
class bank
{
	// creating the name array here.... for saving the name of the user here....
	// public scope varible 
    char name[100];
	char id[100];
	char y;
    int balance;
	int amount;
    public: void open_account()
{
    // clear the terminal here... by using the system clear ....
    system("cls");
    cout<<"Enter your full name ::";

    cin>>name;
    cout<<"Enter your id Key ::";
    cin.ignore();
    cin>>id;
    cout<<"Account Type saving (s) or current (c)";
    cin>>y;
    cout<<"Enter amount for deposite ::";
    cin>>balance;
    cout<<"Your account is created ";

}
 
 public:  void deposite_money()
{
    int a ;
    cout<<"Enter how much money you want to deposit::";
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount\n";
}
 public:  void display_account()
{
    cout<<"Enter the name ::"<<name<<endl;
    cout<<"Your id Key ::"<<id<<endl;
    cout<<"Type of account that you open ::"<<y<<endl;
    cout<<"Amount you deposite ::"<<balance<<endl;

}
   
 public:  void withdraw_money()
{
    cout<<"withdeaw ::";
    cout<<"Enter your amount for withdrawing ";
    cin>>amount;
    // if the withdraw ammount is large then the balance we have
    if(amount>balance){
    cout<<"Low Balance";
     cout<<"Now your total amount is left ::"<<balance;
    	
	}
	else{
		   balance=balance-amount;
    cout<<"Now your total amount is left ::"<<balance;
	}
    
}
};



int main()
{
    int ch,x,n;
    bank obj;

 
    do
    {
    cout<<"01)Open account \n";
    cout<<"02)Deposit money \n";
    cout<<"03)WithDraw money \n";
    cout<<"04)Display account\n";
    cout<<"05)Exit\n";
    cout<<"Please select the option from above  ";
    cin>>ch;

    switch(ch)
    {
        case 1:"01)Open account \n";
        obj.open_account();
        break;
        case 2:"02)Deposit money \n";
        obj.deposite_money();
        break;
        case 3:"03)WithDraw money \n";
        obj.withdraw_money ();
        break;
        case 4:"04)Display account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
        default:
            cout<<"This is not exit please try again ";

    }
    cout<<"\n For Continue::y\n";
    cout<<"For Exit::N";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');


 getch();
 return 0;




}
