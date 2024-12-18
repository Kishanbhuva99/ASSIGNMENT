#include<iostream>
#include<string>

using namespace std;
class iphone
{
    private :
     int id;
    string name;
    int price;
    bool isLocked;
    int ownerId;
     int unitcount;
    int attemptCount;
    void unlock(int password)
    {
        if (password==ownerId)
        {
            isLocked=true;
            cout << "UNLOCKED\n";
        }
        else
        {
            cout << "LOCKED\n";
        }
    }

    public:
        
        iphone()
        {
            id=2074;
            name="khushbu";
            price=200000;
            ownerId=4103;
            isLocked=false;
            unitcount++;
        }

    void call(int phone_number)
    {
        cout<< "calling +91 "<<phone_number<<endl <<endl;
    }
    int calculate(int n1,int n2)
    {
        return n1+n2;
    }
    

    void attemptunlock()
    {
        int password;
        cout << " Enter owner ID to Unlock phone : ";
        cin >> password;

        attemptCount++;
        unlock(password);
    }

    void numunit()
    {
        cout << "Total unit : "<<unitcount;
    }
    void clockstatus()
    {
        int password;
        cout << " enter id to check your phone : ";
        cin >> password;

        if (password==ownerId)
        {
            if (isLocked==true)
            {
                cout<< " unlocked\n";
            }
            else
            {
                cout << " LOCKED\n";
            
            }       
        }
        else
        {
            cout << " not your phone.\n";
        }

    }
    
};

int main()
{
     do
    {
        
        iphone i;
        int choice;
        cout << "\n1.call \n";
        cout << "2.calculate \n";
        cout << "3.UNLOCK the phone \n";
        cout << "4.phone status \n";
        cout << "5.Generate Query \n";
        cout << "6.To see Attempts \n";
        cout << "7.Total unit \n";
        cout << "8.Exit \n";

        cout << "Enter your choice : ";
        cin >> choice;
        if (choice==8)
        {
            break;
        }
        
        switch (choice)
        {
        case 1:
            cout<<"Enter number to call : ";
            int number;
            cin>>number;
            i.call(number);
            break;
        case 2:
            int s1,s2;
            cout<< "Enter number  :";
            cin >> s1;
            cout<< "Enter number :";
            cin >> s2;
            int sum;
            sum=i.calculate(s1,s2);
            cout << "Sum is :" << sum;
            break;
        case 3:
            i.attemptunlock();
            break;
        case 4:
            i.clockstatus();
            break; 
        case 5:
            cout << "Attempt : ";
            break;
        case 6:
            i.numunit();
            break;
        default:
            break;
        }
    }while (1);


    return 0;
}