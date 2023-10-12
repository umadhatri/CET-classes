#include <iostream>
using namespace std;
class student
{

    private : 
        string name, branch;
        int rollNo;
    public:
        student()
        {
            rollNo = 1;
            name = "Uma";
            branch = "ECE";
        }
        student(int sno, string na, string bran)
        {
            rollNo = sno;
            name = na;
            branch = bran;
        }
        void putdata()
        {
            cout << endl << "Name: " << name;
            cout << endl << "Roll Number: " << rollNo;
            cout << endl << "Branch: " << branch << endl;
        }
        ~student()
        {
            cout << "Object is de-allocated" << endl;
        }

};

int main()
{
    student std;
    std.putdata();
    student std2(2, "Thrisha", "CSE");
    std2.putdata();
    return 0;
}