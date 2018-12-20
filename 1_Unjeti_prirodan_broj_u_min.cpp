    /*
	Napišite program, poštujući sve faze procesa programiranja, u kojem ćete unijeti jedan prirodan broj koji predstavlja vrijeme u minutama, a izračunati i ispisati koliko je to vremena u danima, satima i minutama.
	*/
	int minuta;
	float dani = 1440, sati = 60;
	cout << "Unesite jedan broj" << endl;
	cin >> minuta;
	cout << "Trenutno vrijeme u minutama" << minuta << endl;
	sati = minuta / sati;
	cout << "Trenutno vrijeme u satima je: " << sati << endl;
	dani = minuta / dani;
	cout << "Trenutno vrijeme u danima je " << dani << endl;
	system("return>0");
	return 0;