/*

Omogučiti unos dva broja X i Y iz intervala od 10 do 5000. Kreirati program koji će pronaći i ispisati sve brojeve od X do Y (uključujući granične vrijednosti) za koje važi da je obrnuti broj djeljiv sa njegovom sumom cifara. Za olakšanje rješenja zadataka napraviri funkcije za obrtanje poretka cifara i za sumu cifara.

Npr. Za broj 144 vrijedi da mu je suma cifara 9 i da je broj koji se dobije nakon što se njegove cifre obrnu 441, djeljiv sa 9.

Definišite vrijednosti intervala [X, Y]: 11 150
Brojevi koji ispunjuju dati uslov: 18 20 21 24 27
 */

#include <iostream>
#include <cmath>

using namespace std;

int obrniBroj(int broj)
{
	int noviBroj = 0;
	while (broj)
	{
		int cifra = broj % 10;
		noviBroj = noviBroj * 10 + cifra;
		broj /= 10;
	}

	return noviBroj;
}

int sumaCifri(int broj)
{
	int suma = 0;
	while (broj)
	{
		suma += broj % 10;
		broj /= 10;
	}
	return suma;
}

int main() 
{

	int x, y;
	while 
	(
		cout << "Definisite vrijednosti intervala [X, Y]: ", 
		cin >> x >> y, 
		x > 5000 || x < 10 || y > 5000 || y < 10
	);

	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	cout << "Brojevi koji ispunjavaju uslov: ";
	for (int i = x; i <= y; i++)
		if(obrniBroj(i) % sumaCifri(i) == 0)
			cout << i << " ";


	system("pause>0");
	return 0;
}