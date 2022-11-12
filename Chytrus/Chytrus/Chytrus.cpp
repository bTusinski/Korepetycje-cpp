﻿//Zadanie: Chytrus. Generalnie to to samo co zadanie z ruletką tylko na odwrót. Komentarze sobie skasuj jak będziesz wysyłał rozwiązanie.

#include <iostream>

using namespace std;

int main()
{
    const int MAX = 10000; 
    int wszystkie_cukierki;

    //Podajemy liczbę losowań, czyli elementów tablicy
    cin >> wszystkie_cukierki;
    int tab[MAX];

    int min_czestosc = MAX; //Odwrotnie jak w zadaniu z ruletką, minimalna częstość musi startowo być ustawiona na max wartosc
    int najrzadziej_wystepujacy_element;

    for (int i = 0; i < wszystkie_cukierki; i++)
    {
        cin >> tab[i]; //wpisywanie wartości do tablicy

        int czestosc = 0;

        for (int j = 0; j < wszystkie_cukierki; j++)
        {
            if (tab[j] == tab[i])
            {
                czestosc++;
            }
        }

        //W tym warunku jest główna różnica pomiędzy tym zadaniem a tym z ruletką
        //Warunek jest odwrotnie niż w poprzednim zadaniu - tu szukamy minimalnej częstości występowania
        if (czestosc < min_czestosc)
        {
            min_czestosc = czestosc;
            najrzadziej_wystepujacy_element = tab[i];
        }

        //Ten warunek jest wykonywany jeśli częstość występowania jest taka sama, jeżeli tak jest wybieramy liczbę o większej wartości
        else if (czestosc == min_czestosc)
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