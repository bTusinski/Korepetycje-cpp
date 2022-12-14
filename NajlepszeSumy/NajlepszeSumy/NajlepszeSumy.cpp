#include <iostream>

using namespace std;

int main()
{
	int n, najlepsza_suma = -1, suma = 0;
	int najwyzsza = INT_MIN;
	bool dodatnia = false;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int liczba;
		cin >> liczba;
		suma = suma + liczba;
		if (suma > najlepsza_suma)
		{
			najlepsza_suma = suma;
			dodatnia = true;
		}

		if (suma < 0)
		{
			suma = 0;

			if (!dodatnia && najwyzsza < liczba)
			{
				najwyzsza = liczba;
			}
		}
	}

	if (najlepsza_suma == -1) najlepsza_suma = najwyzsza;
	{
		cout << najlepsza_suma << endl;
	}

	return 0;
}