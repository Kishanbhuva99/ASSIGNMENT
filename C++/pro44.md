# What is encapsulation in C++? How is it achieved in classes?

Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them. 

**Two Important  property of Encapsulation** 

1. Data Protection: 
Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.<n>

</n>

2. Information Hiding:
 Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.


**Features of Encapsulation**
Below are the features of encapsulation:

- We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class. 
- The function which we are making inside the class must use only member variables, only then it is called encapsulation.
- If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
- Encapsulation improves readability, maintainability, and security by grouping data and methods together.
-   It helps to control the modification of our data members.

![](https://media.geeksforgeeks.org/wp-content/uploads/20221207132325/ecapsulation_in_cpp.png)


```cpp
/*Create a class BankAccount with data members like balance and member 
functions like deposit and withdraw. Implement encapsulation by keeping the 
data members private. */

#include<iostream>

using namespace std;

class BankAccount
{
private:
string depositor;
int acc_num;
string acc_type;
int balance;

public:

	BankAccount() 
	{
        depositor="kishan";
        acc_num=0121;
        acc_type="SAVING";
        balance=2000;
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

        std::cout << " \nDepositor name : " << depositor << endl;
        //std::cout << " Account number : " << acc_num<< endl;
        std::cout << " Acount  type : " << acc_type  << endl;
        std::cout << " Total balance  : " << balance << endl;
    }
};
	

int main() 
{
	BankAccount b;
    // b.getcustomer();
    // b.showcustomer();
    do
    {
        int choice;
        std::cout << "\n1. Deposite amount :" << endl;
        std::cout << "2. WITHDRAW amount :" << endl;
        std::cout << "3. SHOW BALANCE :" << endl;
        std::cout << "4. EXIT :" << endl;

        std::cout << "ENTER YOUR CHOICE : ";
        std::cin >> choice;
        if (choice==4)
        {
            std::cout << "VISIT AGAIN";
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