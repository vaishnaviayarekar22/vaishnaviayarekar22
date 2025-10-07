#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    static int total_student;
    int roll_no;
    string name;

public:
    student()
    {
        total_student++;
    }
    void setrollno(int r)
    {
        roll_no = r;
    }
    int getrollno()
    {
        return roll_no;
    }
    void setname(string n)
    {
        name = n;
    }
    string getname()
    {
        return name;
    }
    static int gettotal_student()
    {
        return total_student;
    }
};
int student::total_student = 0;
int main()
{

    int n;
    cout << "Enter the no of student :" << endl;
    cin >> n;

    student students[n];

    for (int i = 0; i <= n; i++)
    {
        int roll;
        string nm;
        cout << "Enter the roll no of student :";
        cin >> roll;
        cout << "Enter the name of student :";
        cin >> nm;
    }
}
