#include <iostream>

using namespace std;

void area()
{
	const char znak='*';
	unsigned int szerokosc, dlugosc;
	bool jedziemy_dalej = false, sprawdz_szerokosc=true, sprawdz_dlugosc=true;

	while (!jedziemy_dalej)
	{
		system("cls");
		cout << "\tRysowanie pola gwiazdkami" << endl;
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
					cout << znak;
				}
				cout << "\n";
			}
			unsigned short wybor;
			cout << endl << "1. Jeszcze raz?" << endl;
			cout << "2. Wyjscie" << endl;
			cin >> wybor;

			if (wybor == 2) jedziemy_dalej = true;
		}
	}
}