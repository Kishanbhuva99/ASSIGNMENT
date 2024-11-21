/*  Define a class to represent a bank account. Include the following members:  
-------->>Data Member:  
-Name of the depositor  
-Account Number  
-Type of Account  
-Balance amount in the account  
----------->>Member Functions  
-To assign values  
-To deposited an amount 
-To withdraw an amount after checking balance  
-To display name and balance  */

#include<iostream>

using namespace std;

class bank
{
string depositor;
int acc_num;
string acc_type;
int balance;

public:

	bank() 
	{
        depositor="kishan";
        acc_num=0121;
        acc_type="SAVING";
        balance=2000;
		// std::cout << "Enter Depositor name : "; 
		// std::cin >> depositor;
		// std::cout << "Enter Account number : "; 
		// std::cin >> acc_num;
        // std::cout << "Enter Type of account : ";
        // std::cin >> acc_type;
        // std::cout << " Enter amount :";
        // std::cin >> balance;
	}

    void add_bal()
    {
        int add;
        std::cout << "Enter amount to deposit : ";
        std::cin >>add;
        balance=balance+add;
        std::cout << "AMOUNT DEPOSITED\n";
    }
    void withdraw()
    {
        int withdraw;
        std::cout << "Enter amount to withdraw : ";
        std::cin >> withdraw;
        balance=balance-withdraw;
        std::cout << "AMOUNT withdrawed\n";
    }
    void showcustomer()
    {

        std::cout << " Depositor name : " << depositor << endl;
        //std::cout << " Account number : " << acc_num<< endl;
        std::cout << " Acount  type : " << acc_type  << endl;
        std::cout << " Total balance  : " << balance << endl;
    }
};
	

int main() 
{
	bank b;
    // b.getcustomer();
    // b.showcustomer();
    do
    {
        int choice;
        std::cout << "1. Deposite amount :" << endl;
        std::cout << "2. WITHDRAW amount :" << endl;
        std::cout << "3. SHOW BALANCE :" << endl;
        std::cout << "4. EXIT :" << endl;

        std::cout << "ENTER YOUR CHOICE : ";
        std::cin >> choice;
        if (choice==4)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            b.add_bal();
            break;
        case 2:
            b.withdraw();
            break;
        case 3:
            b.showcustomer();
            break;
        default:
            std::cout << "INVALID INPUT !";
            break;
        }


    } while (1);
    
	return 0;
}
