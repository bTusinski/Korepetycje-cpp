//Zadanie: Ruletka. Komentarze sobie skasuj jak będziesz wysyłał rozwiązanie.

#include <iostream>

using namespace std;

int main()
{
	const int MAX = 10000; //Maksymalna liczba losowań według warunków zadania
	int losowania;

	//Podajemy liczbę losowań, czyli elementów tablicy
	cin >> losowania;
	int tab[MAX];

	//Pętla wpisująca wartości do tablicy
	for (int i = 0; i < losowania; i++)
	{
		cin >> tab[i];
	}

	int max_czestosc = 0;
	int najczesciej_wystepujacy_element;
	
	for (int i = 0; i < losowania; i++)
	{
		int czestosc = 0;

		for (int j = 0; j < losowania; j++)
		{
			if (tab[j] == tab[i])
			{
				czestosc++;
			}
		}

		if (czestosc > max_czestosc)
		{
			max_czestosc = czestosc;
			najczesciej_wystepujacy_element = tab[i];
		}

		//Tego warunku nam brakowało na lekcji.
		//Jeśli mają tą samą liczbę powtórzeń sprawdzamy czy  nasza zmienna rozwiazanie jest większa od aktualnego elementu tablicy (tab[i])
		//Jeżeli tak to jet to faktycznie nasze rozwiązanie, jeżeli nie wtedy przypisujemy zmiennej rozwiazanie wartość tab[i]	
		else if (czestosc == max_czestosc)
		{

			if (najczesciej_wystepujacy_element > tab[i])
			{
				najczesciej_wystepujacy_element = najczesciej_wystepujacy_element;
			}
			else 
			{
				najczesciej_wystepujacy_element = tab[i];
			}
		}
	}

	cout << najczesciej_wystepujacy_element;

	return 0;
}




