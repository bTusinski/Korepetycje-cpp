﻿#include <iostream>

using namespace std;

int main()
{
    int n, h, max_h = 0, licznik = 0;
    cin >> n;
    int tab[1000];


    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (tab[i] >= tab[i + 1])
        {
            licznik++;
        }
        else if (tab[i] >= tab[i - 1])
        {
            licznik++;
        }
    }

    cout << licznik;

    return 0;
}

