//Zadanie: Trzy elementy.

#include <iostream>

using namespace std;

int main()
{
    const int MAX = 10000;
    int rozmiar;

    //Podajemy elementów tablicy
    cin >> rozmiar;
    int tab[MAX];

    //Pętla wpisująca wartości do tablicy
    for (int i = 0; i < rozmiar; i++)
    {
        cin >> tab[i];
    }

    int licznik = 0;

        if (rozmiar >= 3) //Warunek sprawdzający czy tablica ma 3 elementy, chyba nie jest konieczny w zadaniu więc możesz usunąc jak chcesz, moze program będzie trochę szybszy
        {
            //Pętla sprawdza czy elementy mają tą samą wartość, jeśli mają wartość licznika zwiększa się o 1
            for (int i = 0; i < rozmiar - 2 && licznik != 3; i++)
            {
                licznik = 1;
                for (int j = i + 1; j < rozmiar; j++)
                {
                    if (tab[i] == tab[j])
                    {
                        licznik++;
                    }
                }
            }
        }

    //Warunki do wyświetlania - jeśli licznik ma wartość conajmniej 3 to wyświetla się TAK, jeżeli nie wtedy NIE
    if (licznik >= 3)
    {
        cout << "TAK" << endl;
    }

    else
    {
        cout << "NIE" << endl;
    }

    return 0;
}