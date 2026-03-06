// labar3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    const int n = 3;
    double a[n][n];
    double dob = 1;
    bool found = false;

    // Введення матриці
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Обчислення добутку від'ємних елементів у парних рядках
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0) // парний рядок
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] < 0)
                {
                    dob *= a[i][j];
                    found = true;
                }
            }
        }
    }

    // Виведення добутку
    if (found)
        cout << "Product = " << dob << endl;
    else
        cout << "No negative elements in even rows\n";

    // Сортування методом бульбашки
    for (int k = 0; k < n * n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[i][j] > a[i][j + 1])
                {
                    double temp = a[i][j];
                    a[i][j] = a[i][j + 1];
                    a[i][j + 1] = temp;
                }
            }
        }
    }

    // Виведення відсортованої матриці
    cout << "Sorted matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


