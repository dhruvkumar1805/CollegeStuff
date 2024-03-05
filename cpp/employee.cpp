#include <iostream>
using namespace std;

class Member
{
public:
    string name;
    string designation;
    string department;
};

int main()
{
    Member member1;

    member1.name = "Anshul Rani";
    member1.designation = "Manager";
    member1.department = "Finance";

    cout << "Member Information:" << endl;
    cout << "Name: " << member1.name << endl;
    cout << "Designation: " << member1.designation << endl;
    cout << "Department: " << member1.department << endl;

    return 0;
}

// why we need to use the excess modifier
// write a program to implement structure of a