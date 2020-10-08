#include <iostream>
#include "area.h"
#include "perimeter.h"


using namespace std;

int menu()
{
	unsigned short wybor;
	system("cls");

	cout << "\t\t\t\tMenu"<<endl;
	cout << "------------------------------------------------------------"<<endl;
	cout << "1. Rysowanie prostokata/kwadratu wypelnionymi gwiazdkami" << endl;;
	cout << "2. Rysowanie prostokata/kwadratu jako kontur, obwod"<<endl;
	cout << "3. Rysowanie prostokata/kwadratu wraz z przekatnymi"<<endl;
	cout << "4. "<<endl;
	cout << "5. "<<endl;
	cout << "6. "<<endl;
	cout << "7. "<<endl;
	cout << "8. Wyjscie"<<endl<<endl;
	cout << "Twoj wybor: ";
	cin >> wybor;

	switch (wybor)
	{
	case 1: area();	break;
	case 2: perimeter();break;
	case 3:
	{
		break;
	}
	case 4:
	{
		break;
	}
	case 5:
	{
		break;
	}
	case 6:
	{
		break;
	}
	case 7:
	{
		break;
	}
	case 8: return 1; break;
		default: cout << "Nie ma takiej opcji w menu";
	}
}