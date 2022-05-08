#include <iostream>
using namespace std;

// class
class Bank {
	// class varibles 
private:
    int accountNumber;
    char name[30];
    int balance;
    // class methods with public scope
// for openning the user account we have 

public:
    void OpenAccount()
    {
        cout << "Enter Account Number: \n";
        cin >> accountNumber;
        cout << "Enter Name: \n";
        cin >> name;
     // we are setting the init.... ammount to the user account 
     	balance = 1000;
     		 cout << "Account is created successfully: \n";
     	 cout << "Initial balance is added to the account : 1000  \n";
      
    }
    void ShowAccount()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
    	// local varible for input the ammount and add it to the global variable balance
        int ammount;
        cout << "Enter Amount U want to deposit? ";
        cin >> ammount;
        balance = balance + ammount;
    }
    void Withdrawal()
    {
        int ammount;
        cout << "Enter Amount U want to withdraw? ";
        cin >> ammount;
        // if the ammount is large then the balance return 0 to the user 
        if (ammount > balance)
        {
        	  cout << "Less Balance..." << endl;
		}
		else{
			balance = balance-ammount;
		}
    }
    int Search(int);
};
// scope varible to use the bank methods or the function to the public scope easily
// scope ( :: )  operator 
int Bank::Search(int a)
{
    if (accountNumber == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}

// main code
int main()
{
	// bank obj has the 3 threee account as the init input 
    Bank obj[2];
cout<<"Enter the three account here...\n";
    int isAccount = 0, a, ch, i;
    for (i = 0; i <= 2; i++) {
        obj[i].OpenAccount();
    }
// do while loop for displaying the menu of the banking systeme to the user first 

    do {
        // display options
        cout<<"\n****************Bank Menu******************\n";
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit\n" << endl;

        // user input
        cout << "Please input your choice: \n";
        cin >> ch;

        switch (ch) {
        case 1: // displaying all the three account to the user 
            for (i = 0; i <= 2; i++) {
                obj[i].ShowAccount();
            }
            break;
        case 2: // searching the account by the user account id that has stored to the obj 
            cout << "Account Number? \n";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                isAccount = obj[i].Search(a);
                // if account is avaible return it to the user if not then we have
                if (isAccount)
                    break;
            }
            if (!isAccount)
                cout << "Record Not Found\n" << endl;
            break;
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? \n";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                isAccount = obj[i].Search(a);
                if (isAccount) {
                    obj[i].Deposit();
                    break;
                }
            }
            if (!isAccount)
                cout << "Record Not Found\n" << endl;
            break;
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                isAccount = obj[i].Search(a);
                if (isAccount) {
                    obj[i].Withdrawal();
                    break;
                }
            }
            if (!isAccount)
                cout << "Record Not Found\n" << endl;
            break;
        case 5: // exit
            cout << "Thanks for using the banking system." << endl;
            break;
        default:
            cout << "invalid Option" << endl;
        }
    } while (ch != 5);
    // while condition remain true if the user choice is not matched to the 5 
    return 0;
}



// OUTPUT
// Alert 
// Name me space na dena looop terminate ho jhy ga
// account number se ap balance creadit withdraw aur check sakte ho
//Enter the three account here...
//Enter Account Number:
//11
//Enter Name:
//syedzain
//Account is created successfully:
//Initial balance is added to the account : 1000
//Enter Account Number:
//22
//Enter Name:
//ikram
//Account is created successfully:
//Initial balance is added to the account : 1000
//Enter Account Number:
//33
//Enter Name:
//hasan
//Account is created successfully:
//Initial balance is added to the account : 1000
//
//****************Bank Menu******************
//
//
//1:Display All
//2:By Account No
//3:Deposit
//4:Withdraw
//5:Exit
//
//Please input your choice:
//3
//Account Number To Deposit Amount?
//11
//Account Number: 11
//Name: syedzain
//Balance: 1000
//Enter Amount U want to deposit? 3000
//
//****************Bank Menu******************
//
//
//1:Display All
//2:By Account No
//3:Deposit
//4:Withdraw
//5:Exit
//
//Please input your choice:
//4
//Account Number To Withdraw Amount? 11
//Account Number: 11
//Name: syedzain
//Balance: 4000
//Enter Amount U want to withdraw? 5000
//Less Balance...
//
//****************Bank Menu******************
//
//
//1:Display All
//2:By Account No
//3:Deposit
//4:Withdraw
//5:Exit
//
//Please input your choice:
//4
//Account Number To Withdraw Amount? 11
//Account Number: 11
//Name: syedzain
//Balance: 4000
//Enter Amount U want to withdraw? 3000
//
//****************Bank Menu******************
//
//
//1:Display All
//2:By Account No
//3:Deposit
//4:Withdraw
//5:Exit
//
//Please input your choice:
//2
//Account Number?
//11
//Account Number: 11
//Name: syedzain
//Balance: 1000
//
//****************Bank Menu******************
//
//
//1:Display All
//2:By Account No
//3:Deposit
//4:Withdraw
//5:Exit
//
//Please input your choice: