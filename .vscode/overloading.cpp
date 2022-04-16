#include <iostream>
using namespace std;

// int square(int x)
// {
//     return x * x;
// }

// int main()
// {
//     int a = square(4);
//     cout << a;
//     return 0;
// }

void sum();
void sum(int a, int b);
void sum(int a[], int size);
// void sum(char *a, char *b);

int main()
{

    cout << "func1: ";
    sum();

    cout << "func2: ";
    int x, y;
    cin >> x >> y;
    sum(x, y);

    cout << "func3: ";
    int arr[6] = {1, 2, 3, 4, 5, 6};
    sum(arr, 6);
    return 0;
}

void sum()
{
    int a, b;
    cin >> a >> b;
    cout << "The sum of a and b is: " << a + b;
}

void sum(int x, int y)
{
    cout << x + y;
}

void sum(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    cout << sum;
}