/*
Napišite program, poštujući sve faze procesa programiranja, koji omogućava unos prirodnog broja n preko tastature te izračunava sumu:
S=1/pow(3, 2) + 1/pow(5, 2) + ... 1/(pow(2 * n + 1, 2)
*/

	std::cout << "Unesite jedan prirodan broj " << std::endl;
	int n;
	double suma = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		suma += 1. / (pow(2 * i + 1, 2));
	}
	std::cout << suma << std::endl;
