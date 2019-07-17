/*
Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti. Napisati rekurzivnu funkciju koja će taj niz popuniti faktorijelom rednog broja člana niza (1!, 2!, 3!, 4!...). Rekurzija se prekida kada se popuni cijeli niz ili kada se desi overflow na integer varijabli. U ovom zadatku je zabranjeno indeksirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno sve riješiti jednom rekurzivnom funkcijom.
 */

#include <iostream>

using namespace std;

void Ispisi(int *niz, int velicina)
{
  	for(int i = 0; i < velicina; i++)
    		cout << *(niz + i) << endl;
}

void Popuni(int *niz, int velicina, int i = 0)
{
  	if(i < 0 || i >= velicina || velicina < 0)
    		return;

 	int temp = i == 0 ? 1 : *(niz + i - 1) * (i + 1);
	
	if(temp < 0) return;
  
  	*(niz + i) = temp;
  	Popuni(niz, velicina, i + 1);
}

int main() 
{
  	int n;
  	while(cout << "Unesite velicinu niza:", cin >> n, n <= 0);

  	int *niz = new int[n];
  	Popuni(niz, n);
  	Ispisi(niz, n);

  	delete[] niz;
  	system("pause>0");
	return 0;
}