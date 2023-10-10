#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int i;

    // Print the numbers from 1 to 100 using a for loop
    for (i = 1; i <= 100; i++)
    {
        cout << i << ", ";
        if (i == 100)
        {
            cout << i << "\n"
                 << endl;
        }
        else if (i % 10 == 0)
        {
            cout << endl;
        }
    }

    // Print the numbers from 1 to 100 using a while loop
    i = 1;
    while (i <= 100)
    {
        cout << i << ", ";
        if (i == 100)
        {
            cout << i << "\n"
                 << endl;
        }
        else if (i % 10 == 0)
        {
            cout << endl;
        }
        i++;
    }

    // Print the numbers from 1 to 100 using a do-while loop
    i = 1;
    do
    {
        cout << i << ", ";
        if (i == 100)
        {
            cout << i << "\n"
                 << endl;
        }
        else if (i % 10 == 0)
        {
            cout << endl;
        }
        i++;
    } while (i <= 100);
}