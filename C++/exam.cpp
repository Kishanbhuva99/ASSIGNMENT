#include <iostream>

using namespace std;

class User
{
    string name;
    int age;
    string gender;

public:
    void getName()
    {
        cout << "Enter Name :";
        cin >> name;
    }

    void getAge()
    {
        cout << "Enter Age :";
        cin >> age;
    }

    void getGender()
    {
        cout << "Enter Gender :";
        cin >> gender;
    }
};

class InstaUser : public User
{

    string id;

public:
    int followerCount=0, followingCount=0;
    bool isverified;

private:
    void generateProfileLink()
    {
        cout << "Instagram/"<<id;
    }

public:
    void getID()
    {
        cout << "Enter Your User ID:";
        cin >> id;
    }

    void doFollow()
    {
        followingCount++;
    }

    void doUnFollow()
    {
        followingCount--;
    }

    void GetFollower()
    {
        followerCount++;
    }

    void removeFollower()
    {
        followerCount--;
    }

    void GetProfileLink()
    {
        generateProfileLink();
    }
};

int main()
{
    InstaUser u;
    u.getName();
    u.getAge();
    u.getGender();
    u.getID();
    u.doFollow();
    u.doFollow();
    u.doFollow();
    cout << "your Followings : " << u.followingCount << endl;
    u.GetFollower();
    u.GetFollower();
    u.GetFollower();
    u.GetFollower();
    u.GetFollower();
    cout << "Your Followers : " << u.followerCount<<endl;
    u.doUnFollow();
    cout << "Now your Followings : " << u.followingCount << endl;
    u.removeFollower();
    cout << "Now Your Followers : " << u.followerCount<<endl;
    u.GetProfileLink();

}
