#include <iostream>
#include <vector>
using namespace std;

void display_vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter size of your vector: ";
    cin >> size;
    vector<int> vec1;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Emter the element of vector: " << endl;
        cin >> element;
        vec1.push_back(element); // push_back->adds the element at the back(like append)
    }
    display_vector(vec1);
    return 0;
}
