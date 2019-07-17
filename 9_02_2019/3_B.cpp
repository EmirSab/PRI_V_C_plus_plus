/*
Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati rekurzivnu funkciju koja će taj niz popuniti random brojevima u opsegu od 1 do 100. Za generisanje random brojeva koristiti rand() % 100 + 1. Punjenje niza se prekida kada se popuni cijeli niz ili kada se tri puta uzastopno dobije isti random broj. U ovom zadatku je zabranjeno indeksirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno sve riješiti jednom rekurzivnom funkcijom.
 */
#include <iostream>
#include <ctime>

using namespace std;

void Popuni(int *niz, int velicina, int i = 0) 
{
	if (i < 0 || i >= velicina || velicina < 0)
		return;

	*(niz + i) = rand() % 3 + 1;

	if (*(niz + i) == *(niz + i - 1) && *(niz + i) == *(niz + i - 2))
		return;

	Popuni(niz, velicina, i + 1);
}

void Ispisi(int *niz, int velicina)
{
	for (int i = 0; i < velicina; i++)
		cout << *(niz + i) << endl;
}
int main() 
{
	int n;
	while (cout << "Unesite velicinu: ", cin >> n, n <= 0);

	int *niz = new int[n] {};

	srand(time(0));

	Popuni(niz, n);
	Ispisi(niz, n);

	delete[] niz;

	system("pause>0");
	return 0;
}