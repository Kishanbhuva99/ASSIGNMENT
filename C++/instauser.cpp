#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class instauser
{
private:
    string name;
    int age;
    string gender;
    string id_Name;
    int Followers;
    int Followings;
public:
instauser()
{
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter AGE : ";
    cin >> age;
    cout << "Gender(MALE / FEMALE) : ";
    cin >> gender;
    cout << "Enter ID NAME(without space) : ";
    cin >> id_Name;
    srand(time(0));
    Followers = rand() % 1000 + 1;
    srand(time(0));
    Followings = rand() % 500 + 1;
}
void addFollower()
{
    Followers++;
    cout << " 1 Followers added\n";
}
void addFollowings()
{
    Followings++;
    
    cout << " 1 Following added\n";
}
void removeFollower()
{
    Followers--;
    cout << " 1 Followers \n";
}
void removeFollowings()
{
    Followings--;
    cout << " 1 Following added\n";
}
void showuser()
{
    cout << "Name : " << name <<endl;
    cout << "Age : " << age <<endl;
    cout << "Gender : "<< gender<<endl;
    cout << "Followers : " << Followers <<endl;
    cout << "Following : " << Followings<<endl;
    cout << "Instagram/" << id_Name<<endl;

}
};

int main()
{
    instauser U;
    U.showuser();
    U.removeFollower();
    U.removeFollower();
    cout<<  "\n after follower removed\n\n\n";
    U.showuser();

    return 0;
}