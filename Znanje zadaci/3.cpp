//Učitati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik. Ispisati najmanji od 4 dobijena rezultata bez ponavljanja.
int a, b, zbir, razlika, proizvod, kolicnik;
	cin >> a >> b;
	zbir = a + b;
	razlika = a - b;
	proizvod = a * b;
	kolicnik = a / b;
	if (zbir <= razlika && zbir <=proizvod && zbir <=kolicnik)
	{
		cout << zbir << endl;
	}
	else if (razlika <= proizvod && razlika <= kolicnik)
	{
		cout << razlika << endl;
	}
	else if (proizvod <= kolicnik)
	{
		cout << proizvod << endl;
	}
	else
	{
		cout << kolicnik << endl;
	}