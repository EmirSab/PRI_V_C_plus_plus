//Učitati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik. Ispisati one rezultate koji su trocifreni.
int a, b, zbir, razlika, proizvod, kolicnik;
	cin >> a >> b;
	zbir = a + b;
	razlika = a - b;
	proizvod = a * b;
	kolicnik = a / b;
	if (zbir >= 100 && zbir < 1000)
	{
		cout << zbir << endl;
	}
	if (razlika >= 100 && razlika < 1000)
	{
		cout << razlika << endl;
	}
	if (proizvod >= 100 && proizvod < 1000)
	{
		cout << proizvod << endl;
	}
	if (kolicnik >= 100 && kolicnik < 1000)
	{
		cout << kolicnik << endl;
	}