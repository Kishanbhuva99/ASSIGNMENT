#include<iostream>

using namespace std;

class iphone
{
private:
    int id;
    string name;
    int price;
    bool isLocked=false;
    int ownerId;
    static int unitcount;
    void unlock()
    {
        isLocked=true;
        cout << "\t--Phone is UNLOCKED\n";
    }

public:
    int attemptCount=0;
iphone()
{
    id=1234;
    name="kishan";
    price=15000;
    ownerId=1999;
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
    int pswrd;
    cout << " Enter owner ID to Unlock phone : ";
    cin >> pswrd;
    attemptCount++;
    if (pswrd==ownerId)
    {
        unlock();
    }
    else
    {
        cout << "\t--phone is LOCKED\n";
    }
}
void numunit()
{
    cout << "Total unit : "<<unitcount;
}
void checklockstatus()
{
    int pswrd;
    cout << " enter id to check your phone : ";
    cin >> pswrd;
    if (pswrd==ownerId)
    {
        if (isLocked)
        {
            cout<< "\t--phone status is unlocked\n";
        }
        else
        {
            cout << "\t--phone status is LOCKED\n";
            
        }    
    }
    else
    {
        cout << "\t--This is not your phone.\n";
    }
}
void sqlQueryGenerator()
{
            string tName;
            string name;
            int id;
            string whatToUpdate;
            string where;
            string conditoin;
            string condValue;
            string city;
    cout <<"--------------- WELCOME TO SQL QUERY GENRATOR -------------------\n";
    do
    {
        int choice1;
        cout <<"\n1.Select Query :";
        cout <<"\n2.Insert Query :";
        cout <<"\n3.Update Query :";
        cout <<"\n4.Delete Query :";
        cout<<"\n5.Exit QUERY GENERATOR ";

        cout<<"\nEnter your choice :";
        cin >> choice1;
        if (choice1==5)
        {
            break;
        }
        switch (choice1)
        {
        case 1:
            cout << "\nEnter Table Name :";
            cin >> tName;
            
            cout << "\nSelect * From " <<tName <<";" <<endl;
            break;
        case 2:
            cout << "\nEnter Table Name(student) :";
            cin >> tName;
            cout << "Enter student Name :";
            cin >> name;
            cout << "Enter id :";
            cin >> id;
            cout << "Enter city :";
            cin >> city;
            cout<<"\nInsert into "<<tName<<" values (\""<<id<<"\",\""<<name<<"\",\""<<city<<"\");"<<endl;
            break;
        case 3:
            cout << "\nEnter Table Name :";
            cin >> tName;
            cout << "what you want to Update(sid=2 or sname=\"kishan\") :";
            cin >>whatToUpdate;
            cout <<"Where You Want to Update : ";
            cin >> where;
            cout <<"Update Condition(>,<,=) : ";
            cin >> conditoin;
            cout <<"Condition Value : ";
            cin >> condValue;
            cout<<"\nUpdate "<<tName<<" set "<<whatToUpdate <<" Where "<<where<<conditoin<<condValue<<";"<<endl;
            break;
        case 4:
            cout << "\nEnter Table Name :";
            cin >> tName;
            cout <<"Where You Want to Delete : ";
            cin >> where;
            cout <<"Delete Condition(>,<,=) : ";
            cin >> conditoin;
            cout <<"Condition Value : ";
            cin >> condValue;
            cout<<"\nDelete From "<<tName<<" Where "<<where<<conditoin<<condValue<<";"<<endl;
            break;
        
        default:
            break;
        }

    } while (1);
    


}
};
int iphone::unitcount=0;

int main()
{
    iphone i1;
    iphone i2;
    iphone i3;
    iphone i4;

    iphone i;
    do
    {
        
        int choice;
        cout << "\n\n1.call \n";
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
            int num1,num2;
            cout<< "Enter number 1 :";
            cin >> num1;
            cout<< "Enter number 2 :";
            cin >> num2;
            int sum;
            sum=i.calculate(num1,num2);
            cout << "Sum is :" << sum;
            break;
        case 3:
            i.attemptunlock();
            break;
        case 4:
            i.checklockstatus();
            break;
        case 5:
            i.sqlQueryGenerator();
            break;
        case 6:
            cout << "Total Attempt : "<<i.attemptCount;
            break;
        case 7:
            i.numunit();
            break;
        default:
            break;
        }
    } while (1);
return 0;
}