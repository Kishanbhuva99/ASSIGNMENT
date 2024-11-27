# What are the key differences between Procedural Programming and Object-Oriented Programming (OOP)? 

|Procedural Oriented Programming|	Object-Oriented Programming|
|---|---|
|In procedural programming, the program is divided into small parts called functions.	|In object-oriented programming, the program is divided into small parts called objects.
|Procedural programming follows a top-down approach.	|Object-oriented programming follows a bottom-up approach.
|There is no access specifier in procedural programming.	|Object-oriented programming has access specifiers like private, public, protected, etc.
|Adding new data and functions is not easy.	|Adding new data and function is easy.
|Procedural programming does not have any proper way of hiding data so it is less secure.	|Object-oriented programming provides data hiding so it is more secure.
|In procedural programming, overloading is not possible.	|Overloading is possible in object-oriented programming.
|In procedural programming, there is no concept of data hiding and inheritance.	|In object-oriented programming, the concept of data hiding and inheritance is used.
|In procedural programming, the function is more important than the data.	|In object-oriented programming, data is more important than function.
|Procedural programming is based on the unreal world.	|Object-oriented programming is based on the real world.
|Procedural programming is used for designing medium-sized programs.	|Object-oriented programming is used for designing large and complex programs.
|Procedural programming uses the concept of procedure abstraction.	|Object-oriented programming uses the concept of data abstraction.
|Code reusability absent in procedural programming,	|Code reusability present in object-oriented programming.
|Examples: C, FORTRAN, Pascal, Basic, etc.	|Examples: C++, Java, Python, C#, etc.


 ### Define a class to represent a bank account. Include the following members:  
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

```cpp

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
```