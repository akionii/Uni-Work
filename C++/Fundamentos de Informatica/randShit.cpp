#include <iostream>

using namespace std;

int main()
{
    int list[10] = {};
    for (int i = 0; i <= 9; i++)
    {
        list[i] = rand();
        cout << "The random generated number in position: " << i + 1 << " is equal to " << list[i] << endl;
    }
    return 0;
}