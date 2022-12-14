//Zadanie: Żarówki
#include<iostream>

using namespace std;

int main()
{
    int zarowki, nacisniecia_wlacznika;
    int tab[100000], tab2[1000];

    cin >> zarowki >> nacisniecia_wlacznika;

    int  zapalone_zarowki = 0; //Z warunku zadania: Na początku wszystkie żarówki są zgaszone

    for (int i = 0; i < nacisniecia_wlacznika; i++)
    {
        cin >> tab[i]; //Wprowadzanie naciśnięć poszczególnych włączników


        //Zliczanie kliknięć poszczególnych włączników i przypisanie ich do odpowiednich żarówek
        for (int j = 0; j < zarowki; j++)
        {
            if (tab[i] == tab[j])
            {
                tab2[j]++;
            }
        }
    }

    //Tu sprawdzamy ile razy użyty był włącznik
    //Jeśli liczba była nieparzysta oznacza to że żarówka świeci
    for (int j = 0; j < zarowki; j++)
    {
        if (tab2[j] % 2 != 0)
        {
            zapalone_zarowki++;
        }
    }

    cout << zapalone_zarowki;

    return 0;
}