    /*
    Napišite program, poštujući sve faze procesa programiranja, koji za uneseni prirodni broj n i realni broj x izračunava:
S=cos(x)+ cos(x2)+cos(x3)+ …+ cos(xn)
    */
    
    int n;
	std::cin >> n;
	std::cout << "Unesite realan broj x" << std::endl;
	float x = 0, suma = 0;
	std::cin >> x;
	for (int i = 1; i <= n; i++)
	{
		suma += cos(pow(x, i));
	}
	std::cout << suma << std::endl;