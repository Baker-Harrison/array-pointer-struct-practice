#include <iostream>

using namespace std;

void practiceArrays();

void practicePointers();

int main()
{
    practiceArrays();
    practicePointers();
}

void practiceArrays()
{
    int SIZE = 0;
    int *numbers = nullptr;

    numbers = new int[SIZE];

    cout << "How many numbers do you want: ";
    cin >> SIZE;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Give me a number: ";
        cin >> *(numbers + i);
    }

    /*
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(numbers + i) << endl;
    }
    */

    int total = 0;
    for (int i = 0; i < SIZE; i++)
    {
        total += *(numbers + i);
    }

    cout << "Total: " << total << endl;

    cout << "Average: " << (total / static_cast<double>(SIZE)) << endl;

    long int max = -3434344324346643;
    for (int i = 0; i < SIZE; i++)
    {
        if (*(numbers + i) > max)
        {
            max = *(numbers + i);
        }
    }
    cout << "Max: " << max << endl;

    long int min = 33842983592935839;
    for (int i = 0; i < SIZE; i++)
    {
        if (*(numbers + i) < min)
        {
            min = *(numbers + i);
        }
    }
    cout << "Min: " << min << endl;
}

void practicePointers()
{
    string *name = new string;
    int *age = new int;

    cout << "What is your name? ";
    cin >> *name;

    cout << "What is your age? ";
    cin >> *age;

    cout << "Name: " << *name << endl;
    cout << "Name address: " << name << endl;

    cout << "Age: " << *age << endl;
    cout << "Age address: " << age << endl
         << endl;

    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Foward

    for (int i = 0; i < 12; i++)
    {
        cout << *(months + i) << endl;
    }

    cout << endl;

    // Backward
    for (int i = 11; i > -1; i--)
    {
        cout << *(months + i) << endl;
    }
}
