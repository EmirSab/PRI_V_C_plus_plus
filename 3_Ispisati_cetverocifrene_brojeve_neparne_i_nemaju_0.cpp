/*
	Zadatak
	Napišite program, poštujući sve faze procesa programiranja, koji će ispisati sve četveroznamenkaste brojeve kojima su: sve znamenke neparne i ne sadrži znamenku 0.
	*/
	for (int i = 1000; i < 10000; i++)
	{
		int prvi, drugi, treci, cetvrti;
		prvi = i % 10;
		//cout << prvi << endl;
		drugi = i / 10 % 10;
		//cout << drugi << endl;
		treci = i / 100 % 10;
		//cout << treci << endl;
		cetvrti = i / 1000 % 10;
		//cout << cetvrti << endl;
		if ((prvi != 0 && prvi % 2 == 0) && (drugi != 0 && drugi % 2 == 0) && (treci != 0 && treci % 2 == 0) && (cetvrti != 0 && cetvrti % 2 == 0))
		{
			cout << prvi << drugi << treci << cetvrti << endl;
		}
	}