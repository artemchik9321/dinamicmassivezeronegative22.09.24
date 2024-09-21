// dinamicmassivezeronegative22.09.24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int size;
    cout << "input ";
    cin >> size;
    int* ptr = new int[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 41 - 20;
        cout << ptr[i] << "\t";
    }
    cout << endl;

    int a = 0, b = 0, c = 0;
    int* ng = new int[size];
    int* pos = new int[size];
    int* zero = new int[size];

    for (int i = 0; i < size; i++)
    {
        if (ptr[i] < 0)
        {
            ng[a++] = ptr[i];
        }
        else if (ptr[i] > 0)
        {
            pos[b++] = ptr[i];
        }
        else
        {
            zero[c++] = ptr[i];
        }
    }
    delete[] ptr;

    cout << "negative ";
    for (int i = 0; i < a; i++)
        cout << ng[i] << "\t";
    cout << endl;

    cout << "positive ";
    for (int i = 0; i < b; i++)
        cout << pos[i] << "\t";
    cout << endl;

    cout << "zero ";
    for (int i = 0; i < c; i++)
        cout << zero[i] << "\t";
    cout << endl;

    delete[] ng;
    delete[] pos;
    delete[] zero;
}