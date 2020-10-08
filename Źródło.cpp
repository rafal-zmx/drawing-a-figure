#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

int main()
{
	bool wyjscie = false;
	while (!wyjscie)
	{
		menu();
		if (menu() == 1)
		{
			wyjscie = true;
		}
	}
	return 0;
}