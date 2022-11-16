#include <iostream>

using namespace std;

int main()
{
    const int MAX = 1000000;
    int n, podpalone_zapalki = 0;

    int * tab = new int[MAX];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (tab[i] >= tab[i + 1])
        {
            podpalone_zapalki++;
        }
        else if (tab[i] >= tab[i - 1])
        {
            podpalone_zapalki++;
        }
    }

    cout << podpalone_zapalki;

    return 0;
}

