#include <iostream>
#include "save_file.h"

using namespace std;

void perimeter()
{
	const char znak = '*';
	const char spacja = ' ';
	const char new_l = '\n';
	unsigned int dlugosc, szerokosc;
	bool sprawdz_szerokosc = true, sprawdz_dlugosc = true, jedziemy_dalej=false;

	while (!jedziemy_dalej)
	{
		system("cls");
		cout << "\tRysowanie obwodu gwiazdkami i zapis do pliku" << endl;
		cout << "Podaj szerokosc" << endl;
		cin >> szerokosc;
		if (!szerokosc)
		{
			cout << "Wpisz liczbe dodatnia" << endl;
			sprawdz_szerokosc = false;
		}

		cout << "Podaj dlugosc" << endl;
		cin >> dlugosc;
		if (!dlugosc)
		{
			cout << "Wpisz liczbe dodatnia" << endl;
			sprawdz_dlugosc = false;
		}

		if (sprawdz_szerokosc && sprawdz_dlugosc)
		{
			for (int i = 1; i <= dlugosc; i++)
			{
				for (int j = 1; j <= szerokosc; j++)
				{
					if (i == 1 || j == 1 || i == dlugosc || j == szerokosc - 1)
					{
						cout << znak;
						save_file(znak);
					}
					if (i > 1 && i < dlugosc)
					{
						cout << spacja;
						save_file(spacja);
					}
				}
				cout << new_l;
				save_file(new_l);
			}

			unsigned short wybor;
			cout << endl << "1. Jeszcze raz?" << endl;
			cout << "2. Wyjscie" << endl;
			cin >> wybor;
			if (wybor == 2) jedziemy_dalej = true;
		}
	}
}
