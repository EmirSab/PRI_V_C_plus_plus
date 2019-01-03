/*
Napišite program, poštujući sve faze procesa programiranja, u kojem ćete omogućiti unos dva prirodna broja te izračunati i ispisati njihov najveći zajednički djelitelj.
Npr. ako korisnik unese brojeve 12 i 16 program treba ispisati da je najveći zajednički djelitelj ova dva broja broj 4.
*/
cout << "Unesite dva prirodna broja" << endl;
	int a, b, djeljitel;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			djeljitel = i;
		}
	}
	cout << djeljitel;