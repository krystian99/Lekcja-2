#include <iostream>
#include <string> // konieczne dla utworzenia zmiennej string

using namespace std;

int main()
{
	int t; // zmienna lokalna funkcji, która jest dostêpna w tej funkcji dla wszystkich liijek ponizej
	cout << "Podaj liczbê testow: ";
	cin >> t;

	while (t--) // liczba testow do wykonania
	{
		//cout << "*" << endl;
		
		string napis;
		cin >> napis; // wczyta cala linijke znakow bez spacji

		// algorytm do wykonania zadania

		int licznik = 1; // zmienna lokalna pêtli while

		for (int i = 0; i < napis.size(); i++)
		{
			// zliczamy do przodu ile jest takich samych liter

			// wskaznik j porusza sie po calej tablicy
			for (int j = i + 1; j < napis.size(); j++)
			{
				if (napis[i] != napis[j])
					break; // jedna instrukcja wiêc mo¿e byæ bez klamerek {}
				else // je¿eli jest wiecej instrukcji to wstaw klamre {}
				{
					i = j;
					break; // zakoncz pêtlê z j
				}
			}
			// jak pêtla z 'i' bedzie miala nastepny krok to dodaj do niej 1
		}
	}

	return 0;
}