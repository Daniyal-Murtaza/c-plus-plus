#include <iostream>
using namespace std;

class Complex
{
public:
    int real;

private:
    int imag;

    void setData();
    void getData();
};

void Complex ::setData()
{
    cin >> real;
    cin >> imag;
}

void Complex ::getData()
{
    cout << "Number: " << real << "+" << imag;
}

int main()
{
    Complex C1;
    C1.getData();
    return 0;
}