#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
private:
    string ID, fname, lname;

public:
    Student(string a, string b, string c)
    {
        ID = a;
        fname = b;
        lname = c;
    }

    friend ostream &operator<<(ostream &o, Student &s)
    {
        // string email = s.fname.substr() + lname.substr(0, 1);
        ;
        o << s.ID << " " << s.fname << " " << s.lname << " " << email;
        return o;
    }
};

void populate(vector<Student *> &vec)
{
    int size;
    cin >> size;
    string id, fn, ln;
    for (int i = 0; i < size; i++)
    {
        cin >> id >> fn >> ln;
        Student *s = new Student(id, fn, ln);
        vec.push_back(s);
    }
}

int main()
{

    return 0;
}