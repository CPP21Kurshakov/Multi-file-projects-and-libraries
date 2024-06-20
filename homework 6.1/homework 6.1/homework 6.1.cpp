#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math_file_func.h"



int main()
{
    setlocale(LC_ALL, "Russian");

    char q;

    do
    {
        action();

        std::cout << "Хотите продолжить (y / n)" << std::endl;
        std::cin >> q;

        if (q == 'y')
        {
            system("cls");
        }

    } while (q != 'n');

    return 0;
}
