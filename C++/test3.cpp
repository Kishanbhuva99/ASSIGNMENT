
#include<iostream>
using namespace std;

class iphone
{
    int id;
    string ownerid;
    bool islocked;
    int unitcount;

    void unlock()
    {
        islocked = false;
    }

public:
    string name;
    double price;
    iphone(int _id, string _ownerid, string _name, double _price,int _unitcount)
    {
        id = _id;
        ownerid = _ownerid;
        name = _name;
        price = _price;
        islocked = true;
        unitcount = _unitcount;
    }

    void call(int phone_number)
    {
        cout << "Calling... +91 " << phone_number << endl;
    }

    int calculate(int a, int b)
    {
        return a + b;
    }

    void attemptUnlock(string enteredownerid)
    {
        if (enteredownerid == ownerid)
        {
            unlock();
            cout << "Phone unlocked successfully" << endl;
        }
        else
        {
            cout << "Incorrect owner id" << endl;
        }
    }

    void checkLockStatus()
    {
        if (islocked)
        {
            cout << "Phone is locked by owner" << endl;
        }
        else
        {
            cout << "Phone is unlocked by owner" << endl;
        }
    }
    void sqlQueryGenerator()
    {
        int choice;
        cout << "Select SQL query type:\n1. SELECT\n2. INSERT\n3. UPDATE\n4. DELETE\nEnter your choice: ";
        cin >> choice;
        string tableName, columns, values, condition;
        switch (choice)
        {
        case 1:
            cout << "Enter table name: ";
            cin >> tableName;
            cout << "Enter columns to select: ";
            cin >> columns;
            cout << "Generated SQL: SELECT " << columns << " FROM " << tableName;
            break;

        case 2:
            cout << "Enter table name: ";
            cin >> tableName;
            cout << "Enter columns to insert: ";
            cin >> columns;
            cout << "Enter value to insert";
            cin >> values;
            cout << "Generated SQL: insert into" << tableName << "(" << columns << ") values  (" << values << ");" << endl;
            break;

        case 3:
            cout << "Enter table name: ";
            cin >> tableName;
            cout << "Enter column-value pairs to update: ";
            cin >> values;
            cout << "Enter condition: ";
            cin >> condition;
            cout << "Generated SQL: update " << tableName << " set " << values << " where " << condition << ";" << endl;
            break;
        case 4:
            cout << "Enter table name: ";
            cin >> tableName;
            cout << "Enter condition: ";
            cin >> condition;
            cout << "Generated SQL: delete from " << tableName << " where " << condition << ";" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
};

int main()
{
        int id, unitcount;
        double price;
        string name, ownerid;

        cout << "Enter the id of the phone: ";
        cin >> id;
        cout << "Enter the owner id: ";
        cin >> ownerid;
        cout << "Enter the unit count: ";
        cin >> unitcount;
        cout << "Enter the price of the phone: ";
        cin >> price;
        cout << "Enter the name of the phone: ";
        cin >> name;

        iphone myphone(id, ownerid, name,price,unitcount);
        myphone.checkLockStatus();

        string enteredownerid;
        cout << "Enter the owner id to unlock the phone: ";
        cin >> enteredownerid;

        cout << "Enter owner ID to attempt unlocking: ";
        cin >> enteredownerid;

        myphone.attemptUnlock(enteredownerid);
        myphone.checkLockStatus();

        int phoneNumber;
        cout << "Enter phone number to call: ";
        cin >> phoneNumber;
        myphone.call(phoneNumber);

        int a, b;
        cout << "Enter two numbers for sum: ";
        cin >> a >> b;
        cout << "Sum: " << myphone.calculate(a, b) << endl;

        myphone.sqlQueryGenerator();
        return 0;
}