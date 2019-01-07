/*
Napišite program, poštujući sve faze procesa programiranja, koji omogućava da se ispišu
svi brojevi koji zadovoljavaju uvjet da im je zapis jednak zapisu posljednjih znamenki
njihovog kvadrata. (Npr. 62=36, 252=625 …) Provjeru vršiti za prvih 150 prirodnih
brojeva.
*/

int a;
	for (int i = 1; i <= 150; i++)
	{
		a = pow(i, 2);
		if (i == a % 10 || i == a % 100)
		{
			cout <<i << " - " << a << endl;
		}
	}