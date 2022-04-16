#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read_data();
    void check_binary();
    void one_complement();
    void display();
};

void binary::read_data()
{
    cout << "Enter the binary number: " << endl;
    cin >> s;
}

void binary::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binnary Format: ";
        }
    }
}

void binary::one_complement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout << 
}

int main()
{

    return 0;
}