/*
Napišite program, poštujući sve faze procesa programiranja, koji za uneseni prirodni broj n i realni broj x izračunava:
S=cos(x)+ cos2(x)+cos3(x)+ …+ cosn(x)
*/

	cout << "Unesite jedan prirodan i jedan realan broj " << endl;
	int n;
	double suma = 0, x;
	cin >> n >> x;
	for (int i = 1; i < n; i++)
	{
		suma += pow(cos(x), i);
	}
	cout << suma << endl;
