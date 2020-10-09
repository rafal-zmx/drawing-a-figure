#include <iostream>
#include <fstream>

using namespace std;

void save_file(char dane)
{
	fstream file;
	file.open("figure_print.txt", ios::app | ios::out);
	
	file << dane;
	file.close();
}