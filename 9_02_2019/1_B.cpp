/*
Napisati program koji korisniku omogućava unos cijelog broja N, te izračunava geometrijsku sredinu svih neparnih brojeva u intervalu [1, N] koji nisu djeljivi sa brojem 5. Rezlutat treba biti zaokruzen na dvije decimale. Geometrijska sredina n brojeva se računa po formuli: (a_1 * a_2 * ... * a_n)^{\frac{1}{n}}  ili \sqrt[n]{a_1a_2...*a_n}
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
	int n;
	while (cout << "Unesite n: ", cin >> n, n <= 0);

	double proizvod = 1;
	double brojac = 0;
	for(int i = 1; i <= n; i++)
		if (i % 2 != 0 && i % 5 != 0)
		{
			proizvod *= i;
			brojac++;
		}

	cout << "Geometrijska sredina: " << setprecision(3) << pow(proizvod, 1 / brojac);
	system("pause>0");
	return 0;
}