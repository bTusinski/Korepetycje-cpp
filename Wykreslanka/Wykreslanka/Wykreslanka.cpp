﻿#include <iostream>

using namespace std;

int main()
{
    int n, szukany = 1, wykreslenia;
    int tab[1000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> tab[i];

        if (tab[i] == szukany)
        {
            szukany++;
        }
    }

    wykreslenia = n - szukany + 1;
    cout << wykreslenia;

    return 0;
}

