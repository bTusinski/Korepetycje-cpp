#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int MAX = 1000000; 
    int wszystkie_cukierki;

    cin >> wszystkie_cukierki;
    int * tab = new int[MAX];

    int min_czestosc = MAX;
    int najrzadziej_wystepujacy_element;

    for (int i = 0; i < wszystkie_cukierki; i++)
    {
        cin >> tab[i];
    }

    for (int i = 0; i < wszystkie_cukierki; i++)
    {

        int czestosc = 0;

        for (int j = 0; j < wszystkie_cukierki; j++)
        {


            if (tab[i] == tab[j])
            {
                czestosc++;
            }
        }

        if (czestosc < min_czestosc)
        {
            min_czestosc = czestosc;
            najrzadziej_wystepujacy_element = tab[i];
        }

        if (czestosc == min_czestosc)
        {
            if (najrzadziej_wystepujacy_element > tab[i])
            {
                najrzadziej_wystepujacy_element = najrzadziej_wystepujacy_element;
            }
            else
            {
                najrzadziej_wystepujacy_element = tab[i];
            }
        }
    }

    cout << najrzadziej_wystepujacy_element;

    return 0;
}